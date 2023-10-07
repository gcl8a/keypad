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
    //Keypad(void);
    Keypad(uint8_t c1, uint8_t c2, uint8_t c3, uint8_t r1, uint8_t r2, uint8_t r3, uint8_t r4);
    uint8_t checkKeypress(void);
};

class Metal32340SWKeypad : public Keypad //https://www.mpja.com/Keypad-Numeric-X_Y-3X4-Metal-Face/productinfo/32340+SW/
{
public:
    Metal32340SWKeypad(void) : Keypad(6, 10, 8, 7, 5, 4, 9) {} 
};

// class CodeChecker
// {
// private:
//    uint8_t codeLength;
//    uint8_t digits[3];
//    uint8_t index = 0;
   
// public:
//    CodeChecker(void)
//     {
//         codeLength = 3;
//         ResetDigits();
//     }
   
//    void ResetDigits(void);
//    uint8_t HandleDigit(uint8_t digit);
// };
