## Build guide


## Firmware


###  QMK_FIRMWARE

参考<br>

https://github.com/telzo2000/Hello_keyboard/blob/main/readme_about_firmware.md

[Here](https://github.com/telzo2000/ckb4/tree/main/firmware)

<br>

[vial](https://get.vial.today/) is possible.

<br>

![](img/img00002.png)

## Build 1

### 1 Diode soldering

![](img/img00003.jpg)


Solder the diodes to the back of PCB.
<br>
PCBの裏面にダイオードのハンダ付けをします。
<br>
There are lead type and SMD diodes.
<br>
ダイオードはリードタイプか、SMDがあります。
<br>
Here, we will explain the lead type soldering.
<br>
ここでは、リードタイプのハンダ付けの説明をします。
<br>


Use a lead bender to bend the legs of the diode.
<br>
リードベンダーを使い、ダイオードの足を曲げます。
<br>
Insert the diode into the board.
<br>
ダイオードを基板に挿しこみます。
<br>

Please pay attention to the orientation of the diode.
<br>
ダイオードの向きに注意してください。
<br>


Secure the diode with masking tape, then face up.
<br>
マスキングテープでダイオードを固定してから、表面を上にします。
<br>
Solder the protruding legs.
<br>
はみ出ている足部分に、ハンダ付けをします。
<br>
After soldering, use nippers to cut off the protruding legs.
<br>
はんだ付けが終わったら、はみ出ている足をニッパーで切り取ってください。
<br>

[８倍速　Diodeハンダ付け動画](https://youtu.be/Yaodh2-XxV4)

<br>
<br>

### 2 Soldering switch sockets

![](img/img00004.jpg)

Solder the switch sockets on the back side.
<br>
裏面にスイッチソケットのハンダ付けをします。
<br>

Note

<br>
The bottom row has cherry MX and Kailh choc switch sockets, but this is a prototype. Currently, it supports choc.
<br>
最下段に、cherry MXとKailh chocのスイッチソケットが付いているが、これは試作品です。現在は、choc対応になっている。

[８倍速　Switch socketハンダ付け動画](https://youtu.be/E__mHvmIXQo)

<br><br>

### 3　Soldering RP-2040Zero  

The side on which components such as the boot button and reset button of RP-2040Zero are mounted is the front side, and the other side is the back side.
<br>
RP-2040Zeroのbootボタンやresetボタンなど部品実装されている面を表面とし、反対側を裏面とします。
<br>
Place the back side of the PCB and the back side of the RP-2040Zero facing each other and solder the respective terminals.
<br>
PCBの裏面とRP-2040Zeroの裏面が向かい合うようにして置き、それぞれの端子をハンダ付けします。
<br>
<br>

### 4 Soldering Joystick and Rotaly encodaer

Insert the joystick or rotary encoder from the front side of the PCB and solder it on the back side of the PCB.
<br>
PCB表面から、ジョイスティックやロータリーエンコーダーを差し込み、PCB裏面ではんだ付けをします。

<br><br>


### 5 Instorlling QMK＿Firmware

Install QMK_Firmware from your PC to RP-2040Zero.
<br>
QMK_FirmwareをPCからRP-2040Zeroにインストールしてください。
<br>
<br>
① Download https://github.com/telzo2000/ckb4/blob/main/firmware/ckb4_vial.uf2 to your PC.
<br>
① https://github.com/telzo2000/ckb4/blob/main/firmware/ckb4_vial.uf2　をPCにダウンロードしておく。

<br><br>
② Connect the PC and RP-2040Zero with a USB cable.
<br>
②PCとRP-2040ZeroをUSBケーブルで繋ぐ。
<br><br>
③Press the reset button while pressing the boost button on the RP-2040Zero.
<br>
③RP-2040Zeroのboostボタン押しながら、resetボタンを押す。
<br><br>
④Since there is a folder of RP-2040Zero on the PC screen, drag and drop the downloaded ckb4_vial.uf2 there.
<br>
④PC画面にはRP-2040Zeroのフォルダがあるので、そこに、ダウンロードしたckb4_vial.uf2をドラッグアンドドロップする。
<br><br>

⑤Check if it is recognized by connecting to [vial](https://get.vial.today/). Edit the keymap accordingly.
<br>
⑤[vial](https://get.vial.today/)に繋いで認識するかどうか確認する。合わせてキーマップの編集をする。

### Build 2(case)

### 1 Case

Insert the switch into the top case from above and secure it with the PCB switch socket from the bottom of the top case.
<br>
トップケースに上からスイッチを差し込み、トップケースの下側からPCBのスイッチソケットで固定する。
<br><br>

After inserting all the key switches, attach the rotary encoder knob and joystick cap.
<br>
すべてのキースイッチを差し込んだ後、ロータリーエンコーダーのノブやジョイスティックのキャップを装着する。
<br><br>

Fix the bottom case by fitting the uneven part on the front side.
<br>

ボトムケースは、手前の凹凸部をはめ込むようにして、固定する。
<br><br>
If necessary, attach magnets to the round indentations on the sides of the top and bottom cases.
<br>
必要であれば、トップケースとボトムケースの側面の丸い窪みに磁石をつけると、よい。
<br><br>


Welcome to the world of the best keyboards.
<br>
最高のキーボードの世界にようこそ。
<br>
![](img/img00005.jpg)

![](img/img00006.jpg)

![](img/img00007.jpg)

![](img/img00008.jpg)
