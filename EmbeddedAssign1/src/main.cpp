/*
 * @Author: vulpex 2267339737@qq.com
 * @Date: 2025-05-01 17:30:54
 * @LastEditors: vulpex 2267339737@qq.com
 * @LastEditTime: 2025-05-01 20:09:44
 * @FilePath: \hw2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
pinMode(27, OUTPUT);
pinMode(26, OUTPUT);
pinMode(25, OUTPUT);
pinMode(33, OUTPUT);
pinMode(32, OUTPUT);
pinMode(23, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(27, HIGH);
  delay(200);
  digitalWrite(27, LOW);
  delay(200);
  digitalWrite(26, HIGH);
  delay(200); 
  digitalWrite(26, LOW);
  delay(200);
  digitalWrite(25, HIGH);
  delay(200);
  digitalWrite(25, LOW);
  delay(200);
  digitalWrite(33, HIGH);
  delay(200);
  digitalWrite(33, LOW);
  delay(200);
  digitalWrite(32, HIGH);
  delay(200);
  digitalWrite(32, LOW);
  delay(200);
  digitalWrite(23, HIGH);
  delay(200);
  digitalWrite(23, LOW);
  delay(200);
}

// put function definitions here:
