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


[movie](https://www.youtube.com/watch?v=Ccrc7-rJzww)

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

![](img/img00009.jpg)

Cut the diode leads first as shown in the photo above.
<br>

上の写真のように、先にダイオードのリードを切ってください。
<br>



Insert the diode into the board.
<br>
ダイオードを基板に挿しこみます。
<br>

Please pay attention to the orientation of the diode.
<br>
ダイオードの向きに注意してください。
<br>

![](img/img00011.jpg)

![](img/img00010.jpg)

Please solder.
<br>
はんだ付けをしてください。
<br>




[８倍速　Diodeハンダ付け動画](https://youtu.be/Yaodh2-XxV4)

<br>
<br>

### 2 Soldering switch sockets


[movie](https://www.youtube.com/watch?v=B_qjJxccLHA)

Solder the switch sockets on the back side.
<br>
裏面にスイッチソケットのハンダ付けをします。
<br>

![](img/img00012.jpg)

![](img/img00013.jpg)


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

## Build 2a(prototype_case)

[movie](https://www.youtube.com/watch?v=uL3kOORdtyU)

With the bottom side of the top case facing up, heat seal the insert nuts in 6 locations using a soldering iron.
<br>
トップケースの下側を表面にし、インサートナットを６箇所に、はんだゴテで熱封入します。
<br>
<br>
Insert a 6mm M2 screw from the bottom of the bottom case to secure the top case and bottom case.
<br>
ボトムケースの下側から、M2ネジ6mmを差し込み、トップケースとボトムケースを固定します。
<br>
<br>



## Build 2b(keecke_type_case)


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
