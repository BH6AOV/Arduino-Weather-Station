<h1 align="center"> Arduino Weather Station</h1>
<h2 align="center">This is an Arduino Weather Station Program.</h2>
<p align="center">In this program,you can use your Arduino Uno Rev3 and DHT Tempture sensor with 1602A LCD monitor to make a weather station easily.This source come from https://miymakers.wordpress.com/ and in this course of study I find some wrong and fixed in this page.</p>
<p>This station will use 5V port on Arduino.</p>
<h3 align="center">Connect</h3>
<h4 align="center">LCD Connect</h4>
<p align="center">D7- DIGITAL PIN 2</br>D6 – 3</br>D5 – 4</br>D4 – 5</br>E – 11</br>RS – 12</br>VDD (+) RAIL BREADBOARD</br>A (+)RAIL BREADBOARD</br>VSS (-)RAIL BREADBOARD</br>K (-)RAIL BREADBOARD</br>RW (-)RAIL BREADBOARD</br>VO –  Potentiometer Middle Pin</p>
<h4 align="center">DHT sensor Connect</h4>
<p align="center">We will be perforated positive side and left to right a total of 4 pins(may be your only have 3 pins but that is better).</br>The first pin is VCC,can work on 3.3V to 5.5V</br>The second pin is DATA PIN,you need connect this pin to A1 port on board.</br>The third pin is empty (3 pins DHT sensor don't have this pin)</br>The fourth pin is GND</br>Caution!You need use this pin and in the orginal course of study,they teach you use third pin and that is WRONG!</p>
<h3 align="center">Flash the sourse to board</h3>
<p align="center">And now,you need install DHT repo to your Arduino IDE,you can see a zip package named DHT.zip in this repo.Caution!You must install this package and if you don't install this you may be get so many errors </p>
<h3 align="center">congratulation!Now you can see Temp and Humidity data in your 1602A monitor throught adjustment potentiometer if you connect right!</h3>
</br>
<h2 align="center">这是一个构建 Arduino 气象站的小项目</h2>
<p>    你可以通过这个项目轻松地使用你的 Arduino Uno 和 DHT 温湿度传感器以及 1602A 点阵屏来构建一个小的 Arduino 气象站.本项目的源码来自 https://miymakers.wordpress.com/ 在这个原来的教程中出现了一个小错误，我会在后面的教程中纠正它</p>
<p>此气象站将使用 5V 供电.</p>
<h3 align="center">接线</h3>
<h4 align="center">LCD 显示屏的连接</h4>
<p align="center">D7 - 2 号接口</br>D6 – 3 号接口</br>D5 – 4 号接口</br>D4 – 5 号接口</br>E – 11 号接口</br>RS – 12 号接口</br>VDD 接入电源正极</br>A 接入电源正极</br>VSS 接入电源负极</br>K 接入电源负极</br>RW 接入电源负极</br>VO –  电位器的中间脚</p>
<h4 align="center">DHT 传感器的连接</h4>
<p align="center">我们以有很多孔的一面为正面，从左到右一共有4个引脚（如果你的只有三个引脚那更好）.</br>第一个引脚接电源正极，工作电压范围是 3.3V 到 5.5V</br>第二个引脚是输出脚，你需要把它连接到 A1 接口</br>第三个脚是空置脚（如果你的 DHT 只有三个脚则你的传感器上没有这个脚）</br>第四个脚接电源负极</br>注意，原始的教程上让你把第三个脚接到 A1 接口上，这是错误的</p>
<h3 align="center">烧写源码</h3>
<p align="center">现在，你需要在你的 Arduino IDE 中安装本库中的 DHT.zip 到你的库中.注意，你必须安装这个库，否则你会在编译过程中出现错误</p>
<h3 align="center">恭喜！如果你接线没问题的话，现在已经可以通过调整电位器看见屏幕上显示出数据了！</h3>

<h2 aligh="center">This is connect picture / 接线图示</h2>
<img src="./connectteach.jpg" align="center">
