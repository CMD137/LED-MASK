//===============================================  CMD-137  ======================================================
#include "FastLED.h"  //应用库

#define NUM_LEDS 64 //定义灯珠数量
#define DATA_PIN 6 //定义输出信号引脚
#define LED_TYPE WS2812//灯带型号
#define COLOR_ORDER GRB//颜色顺序

#define mc 5//麦克风信号输出引脚
#define vcc4 4//麦克风供电
 uint8_t maxbright = 100; // 最大亮度（0--255）

 CRGB leds[NUM_LEDS]; //建立光带对象
 CRGB mycolor(30,10,100);//定义灯珠统一颜色
void setup() {
  Serial.begin(9600);
  delay(1000);//稳定型等待
  pinMode(mc,INPUT);
  pinMode(vcc4,OUTPUT);
  LEDS.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS);//初始化灯带
  FastLED.setBrightness(maxbright);//初始化亮度
  //by CMD-137
  digitalWrite(vcc4,HIGH);


}
 
void loop() {
int mcout=digitalRead(mc);

  if(mcout==0){
  ledmod1();
  //delay(2);
  FastLED.clear();
 
  ledmod2();
  delay(100);
  FastLED.clear();
 
  ledmod3();
  delay(100);
  FastLED.clear();
  
  ledmod1();
  delay(1);
  FastLED.clear();
  }
}



void ledmod1(){         //led闭嘴表情
  leds[24]=mycolor;
  leds[25]=mycolor;
  leds[26]=mycolor;
  leds[27]=mycolor;
  leds[28]=mycolor;
  leds[29]=mycolor;
  leds[30]=mycolor;
  leds[31]=mycolor;
  leds[32]=mycolor;
  leds[33]=mycolor;
  leds[34]=mycolor;
  leds[35]=mycolor;
  leds[36]=mycolor;
  leds[37]=mycolor;
  leds[38]=mycolor;
  leds[39]=mycolor;
  FastLED.show();
   }

  void ledmod2(){   //表情变化过渡
   leds[11]=mycolor; 
   leds[12]=mycolor;
   leds[17]=mycolor;
   leds[18]=mycolor;
   leds[21]=mycolor;
   leds[22]=mycolor;
   leds[24]=mycolor;
   leds[31]=mycolor;
   leds[32]=mycolor;
   leds[41]=mycolor;
   leds[42]=mycolor;
   leds[43]=mycolor;
   leds[44]=mycolor;
   leds[45]=mycolor;
   leds[46]=mycolor;
   leds[39]=mycolor;
   FastLED.show();        
   }

  void  ledmod3(){    //张嘴表情
   leds[2]=mycolor;
   leds[3]=mycolor;
   leds[4]=mycolor;
   leds[5]=mycolor;
   leds[9]=mycolor;
   leds[10]=mycolor;
   leds[13]=mycolor;
   leds[14]=mycolor;
   leds[16]=mycolor;
   leds[17]=mycolor;
   leds[22]=mycolor;
   leds[23]=mycolor;
   leds[24]=mycolor;
   leds[31]=mycolor;
   leds[32]=mycolor;
   leds[39]=mycolor;
   leds[41]=mycolor;
   leds[46]=mycolor;
   leds[49]=mycolor;
   leds[50]=mycolor;
   leds[53]=mycolor;
   leds[54]=mycolor;
   leds[58]=mycolor;
   leds[59]=mycolor;
   leds[60]=mycolor;
   leds[61]=mycolor;
   FastLED.show();
    }
