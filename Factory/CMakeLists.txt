# cmakeのバージョン
cmake_minimum_required(VERSION 3.1)

# プロジェクト名指定
project(FactoryDLL CXX)

# srcフォルダー以下のcppファイル一覧をcppfilesという変数に格納
file(GLOB_RECURSE cppfiles RELATIVE ${PROJECT_SOURCE_DIR} ./*.cpp ./Component/*.cpp)
message(${cppfiles})

# dllでビルドすると指定
add_library(FactoryDLL SHARED ${cppfiles})

# c++11
target_compile_features(FactoryDLL PRIVATE cxx_std_11)

# # include ディレクトリ指定
# target_include_directories(oreorelib INTERFACE ./header)