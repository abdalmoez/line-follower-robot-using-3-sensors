#ifndef SETTINGS
#define SETTINGS
    
    //Motors pwm
    #define motorRightPWM 75*9/10
    #define motorLeftPWM 115*9/10
    
    //Pin define
   
    #define motorRightBackward 10
    #define motorRightForward 11
    #define motorLeftBackward 5
    #define motorLeftForward 6

        //pin def :capteur ligne
    #define lineSensorLeft A2
    #define lineSensorMid A1
    #define lineSensorRight A0
    
    #define SensorUSMid_Trig 4
    #define SensorUSMid_Echo 5
    #define SensorUSRight_Trig 6
    #define SensorUSRight_Echo 7
    #define SensorUSMidRight_Trig 12
    #define SensorUSMidRight_Echo 13


   
    //csts
    #define minimalDistance 5
    #define rotate90timeRight 880
    #define rotate180timeRight 1500
    #define rotate90timeLeft 820
    #define rotate180timeLeft 1551
    #define forward25cmtime 1050
    #define SensorLeftLimitDetect 5
    #define SensorRightLimitDetect 5
    #define SensorBottomimitDetect 5
    #define SensorUpLimitDetect 5
    
#endif

