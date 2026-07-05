# Yunekoが創作物を公開しているページのリポジトリです
[ページ](https://yuneko1127.github.io/yunekopage/)

## ディレクトリ構成
- `poems/`: コード詩のプログラムソースコードファイル（`.c`, `.py`, `.java` など）が格納されています。
- `image/`: グラフィック作品の画像ファイルが格納されています。

## ローカルでの動作確認方法
詩の表示ページ（`poem.html`）では、JavaScript を用いて `poems/` 配下のソースコードファイルを動的に読み込んでいます。
ブラウザのセキュリティ上の制約（CORS）により、HTMLファイルを直接ダブルクリックしてブラウザで開くと読み込みエラーが発生します。

ローカルで表示を確認するには、以下のいずれかの方法でローカルWebサーバーを起動してアクセスしてください。

### 方法1: Python を使用する場合
端末（PowerShellやコマンドプロンプトなど）で本ディレクトリに移動し、以下のコマンドを実行します：
```bash
python -m http.server 8000
```
起動後、ブラウザで [http://localhost:8000/poem.html](http://localhost:8000/poem.html) にアクセスします。


---

## 著作権について / Copyright Notice
本プロジェクトに含まれるWebページ、画像（`image/` 内）、およびコード詩のファイル（`poems/` 内）を含む、すべてのファイル・コンテンツの著作権は、すべて作者である Yuneko に帰属します。

無断での転載、二次利用、改変、再配布などの行為は禁止します。

---

All files and contents in this project, including web pages (HTML, CSS, JS, etc.), images (in `image/`), and program source files for code poems (in `poems/`), are copyrighted by the author, Yuneko.

Unauthorized reproduction, secondary use, modification, or redistribution is strictly prohibited.
