/*
 * @Author: vulpex 2267339737@qq.com
 * @Date: 2025-05-01 17:30:54
 * @LastEditors: vulpex 2267339737@qq.com
 * @LastEditTime: 2025-05-10 09:21:53
 * @FilePath: \hw2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

char flag = 0;
String str;

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    str = Serial.readString();
    switch(flag){
      case 0:
      if(str == "AA"){flag++;}
      else{Serial.println("The password is wrong");flag = 0;}
      break;
      case 1:
      if(str == "BB"){flag++;}
      else{Serial.println("The password is wrong");flag = 0;}
      break;
      case 2:
      if(str == "CC"){flag++;}
      else{Serial.println("The password is wrong");flag = 0;}
      break;
      case 3:
      if(str == "DD"){Serial.println("The password is correct");flag = 0;}
      else{Serial.println("The password is wrong");flag = 0;}
      break;
      default:
      Serial.println("The password is wrong");flag = 0;
    }
  }
}
// put function definitions here:
