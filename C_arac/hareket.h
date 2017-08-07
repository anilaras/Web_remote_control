//
//  hareket.h
//  opencv_deneme
//
//  Created by Anıl ARAS on 7.08.2017.
//  Copyright © 2017 Anıl ARAS. All rights reserved.
//

#ifndef hareket_h
#define hareket_h


#endif /* hareket_h */

#include <wiringPi.h>

#define ILERI "2"
#define GERI "8"
#define SAG "6"
#define SOL "4"
#define SAG_ILERI "3"
#define SAG_GERI "9"
#define SOL_ILERI "1"
#define SOL_GERI "7"
#define DUR "5"

#define ILERI_PIN 1
#define GERI_PIN 2
#define SAG_PIN 3
#define SOL_PIN 4



void hareket(string yon){
 switch (yon) {
 case ILERI:
 digitalWrite(ILERI_PIN, HIGH);
 digitalWrite(GERI_PIN, LOW);
 digitalWrite(SAG_PIN, LOW);
 digitalWrite(SOL_PIN, LOW);
 break;
 case GERI:
 digitalWrite(ILERI_PIN, LOW);
 digitalWrite(GERI_PIN, HIGH;
 digitalWrite(SAG_PIN, LOW);
 digitalWrite(SOL_PIN, LOW);
 break;
 case SAG:
 digitalWrite(ILERI_PIN, LOW);
 digitalWrite(GERI_PIN, LOW);
 digitalWrite(SAG_PIN, HIGH);
 digitalWrite(SOL_PIN, LOW);
 break;
 case SOL:
 digitalWrite(ILERI_PIN, LOW);
 digitalWrite(GERI_PIN, LOW);
 digitalWrite(SAG_PIN, LOW);
 digitalWrite(SOL_PIN, HIGH);
 break;
 case SOL_ILERI:
 digitalWrite(ILERI_PIN, HIGH);
 digitalWrite(GERI_PIN, LOW);
 digitalWrite(SAG_PIN, LOW);
 digitalWrite(SOL_PIN, HIGH);
 break;
 case SOL_GERI:
 digitalWrite(ILERI_PIN, LOW);
 digitalWrite(GERI_PIN, HIGH);
 digitalWrite(SAG_PIN, LOW);
 digitalWrite(SOL_PIN, HIGH);
 break;
 case SAG_ILERI:
 digitalWrite(ILERI_PIN, HIGH);
 digitalWrite(GERI_PIN, LOW);
 digitalWrite(SAG_PIN, HIGH);
 digitalWrite(SOL_PIN, LOW);
 break;
 case SAG_GERI:
 digitalWrite(ILERI_PIN, LOW);
 digitalWrite(GERI_PIN, HIGH);
 digitalWrite(SAG_PIN, HIGH);
 digitalWrite(SOL_PIN, LOW);
 break;
 case DUR:
 digitalWrite(ILERI_PIN, HIGH);
 digitalWrite(GERI_PIN, HIGH);
 digitalWrite(SAG_PIN,HIGH);
 digitalWrite(SOL_PIN, HIGH);
 break;
 
 default:
 digitalWrite(ILERI_PIN, LOW);
 digitalWrite(GERI_PIN, LOW);
 digitalWrite(SAG_PIN, LOW);
 digitalWrite(SOL_PIN, LOW);
 break;
 }
 
 
 }
