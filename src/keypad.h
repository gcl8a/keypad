//
//  keypad.h
//  
//
//  Created by Gregory C Lewin on 3/6/17.
//
//

#pragma once

#include <Arduino.h>

#define STAR 11
#define POUND 12

class Keypad
{
private:
    uint8_t prevKey = 0;
    
    //defaults
    uint8_t COL1 = 6;
    uint8_t COL2 = 10;
    uint8_t COL3 = 8;

    uint8_t ROW1 = 7;
    uint8_t ROW2 = 5;
    uint8_t ROW3 = 4;
    uint8_t ROW4 = 9;
    
public:
    Keypad(void);
    uint8_t checkKeypress(void);
};

//class CodeChecker
//{
//private:
//    uint8_t codeLength;
//    uint8_t digits[];
//    uint8_t index = 0;
//    
//public:
//    CodeChecker(void) : digits(4), codeLength = 4;
//    {
//        ResetDigits();
//    }
//    
//    void ResetDigits(void)
//    {
//        for(int i = 0; i < codeLength; i++)
//            digits[i] = 255;
//        index = 0;
//    }
//    
//    uint8_t HandleDigit(uint8_t digit)
//    {
//        if(digit == POUND)
//        {
//            if(index == 4) //right length
//            {
//                uint8_t success = (digits[0] == 2) && (digits[1] == 7) && (digits[2] == 5) && (digits[3] == 7);
//                ResetDigits();
//                return success;
//            }
//            else return 0;
//        }
//        
//        else if(digit == STAR)
//        {
//            ResetDigits();
//            return 0;
//        }
//        
//        else
//        {
//            if(index < 4) digits[index++] = digit;
//            return 0;
//        }
//
//        return 0;
//    }
//};
