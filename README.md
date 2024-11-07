# マイコン・回路講習会 2024

> [!Note]
> これは東京工業大学 ロボット技術研究会 (Society of the Study of Robotics)にて\
> 2024年度 マイコン・回路講習会で用いたソースコードです。

## 想定環境

### プラットフォーム

**[PlatformIO IDE](https://platformio.org/)**
> [!Warning]
> VSCode拡張機能で使用

### マイコン

**[ESP32-WROOM32E](https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32e_esp32-wroom-32ue_datasheet_en.pdf)**
> [!Warning]
> 開発ボードを支給

### フレームワーク

**[arduino-esp32](https://registry.platformio.org/tools/platformio/framework-arduinoespressif32)**

---

## 内容一覧

| 回 | 内容
|:--|:--
| 02 | Hello world!
| 03 | カウントアップ
|    | 偶数と奇数の判定 (1)
| 04 | 偶数と奇数の判定 (2)
|    | Fizz buzzゲーム
|    | 素数の判定
| 05 | Lチカ (blink)
|    | UART通信
| 06 | PWM出力
| 07 | C配列 (`T[N]`)
|    | C++配列 (`std::array<T, N>`)
| 08 | 構造体1 (デジタル出力クラスの作成)
|    | 構造体2 (PWM出力クラスの作成)
| 09 | デジタル入力 (タクトスイッチの読み取り)
|    | アナログ入力 (ポテンショメータの読み取り)
| 10 | ライブラリ導入 (PWM式サーボモータの使用)
| 11 | ファイル分割
| 12 | GPIO割り込み
|    | タイマー割り込み
