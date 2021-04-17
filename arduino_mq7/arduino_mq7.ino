#include "MQ7.h"

const int AOUTpin=0;//the AOUT pin of the CO sensor goes into analog pin A0 of the arduino
const int DOUTpin=8;//the DOUT pin of the CO sensor goes into digital pin D8 of the arduino

MQ7 mq7(A0, 5.0);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);             // シリアル通信の準備をする
  while (!Serial);                  // 準備が終わるのを待つ

  pinMode(DOUTpin, INPUT);//sets the pin as an input to the arduino

}

void loop() {

  Serial.print(mq7.getPPM());
  Serial.println("");
  delay(1000);

}
