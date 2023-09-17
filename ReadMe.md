# CustomComponentTest
自作のゲームエンジンでカスタムコンポーネントを実装する際の試しをするためのリポジトリ

# 概要

フォルダ構成は以下。

## フォルダ構成
- Engine エンジンを模したフォルダ。main.cppとFactoryクラスの関数を呼ぶCallFactoryがある。
- Factory Factoryクラスが入ってる。UserFolderにあるコンポーネントを生成する
- UserFolder　ユーザが作ったクラスという体のクラスが入ってる。
  
# ビルド方法
以下のコマンドでビルドして、実行が出来る。

```
mkdir build 
cd build
cmake ..\ -G"Visual Studio 16 2019"
cmake --build .
.\bin\Debug\main.exe
```