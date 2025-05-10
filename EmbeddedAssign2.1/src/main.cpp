/*
 * @Author: vulpex 2267339737@qq.com
 * @Date: 2025-05-01 17:30:54
 * @LastEditors: vulpex 2267339737@qq.com
 * @LastEditTime: 2025-05-01 21:34:41
 * @FilePath: \hw2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
int LED1 = 27;
int LED2 = 26;
char col;

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    col = Serial.read();
    if(col == '1'){
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      Serial.println("LED1 is on");
  }
    else if(col == '2'){
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      Serial.println("LED2 is on");
    }
    else if(col == '0'){
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      Serial.println("LEDs are off");
    }
    else{
      Serial.println("Invalid input");
    }
  }
}
// put function definitions here:
