#include <keypad.h>

    Keypad::Keypad(uint8_t c1, uint8_t c2, uint8_t c3, uint8_t r1, uint8_t r2, uint8_t r3, uint8_t r4)
    {
        ROW1 = r1;
        ROW2 = r2;
        ROW3 = r3;
        ROW4 = r4;
        COL1 = c1;
        COL2 = c2;
        COL3 = c3;

        pinMode(ROW1, INPUT_PULLUP);
        pinMode(ROW2, INPUT_PULLUP);
        pinMode(ROW3, INPUT_PULLUP);
        pinMode(ROW4, INPUT_PULLUP);
        
        pinMode(COL1, INPUT);
        pinMode(COL2, INPUT);
        pinMode(COL3, INPUT);
    }
    
    uint8_t Keypad::checkKeypress(void)
    {
        uint8_t key = 0;
        
        pinMode(COL1, OUTPUT); //OUTPUT LOW
        if(!digitalRead(ROW1)) key = 1;
        if(!digitalRead(ROW2)) key = 4;
        if(!digitalRead(ROW3)) key = 7;
        if(!digitalRead(ROW4)) key = STAR;
        pinMode(COL1, INPUT);
        
        pinMode(COL2, OUTPUT); //OUTPUT LOW
        if(!digitalRead(ROW1)) key = 2;
        if(!digitalRead(ROW2)) key = 5;
        if(!digitalRead(ROW3)) key = 8;
        if(!digitalRead(ROW4)) key = 10;
        pinMode(COL2, INPUT);
        
        pinMode(COL3, OUTPUT); //OUTPUT LOW
        if(!digitalRead(ROW1)) key = 3;
        if(!digitalRead(ROW2)) key = 6;
        if(!digitalRead(ROW3)) key = 9;
        if(!digitalRead(ROW4)) key = POUND;
        pinMode(COL3, INPUT);
        
        if(key != prevKey)
        {
            prevKey = key;
            return key;
        }
        
        return 0;
    }


//    //CodeChecker::CodeChecker(void);
   
//    void CodeChecker::ResetDigits(void)
//    {
//        for(int i = 0; i < codeLength; i++)
//            digits[i] = 255;
//        index = 0;
//    }
   
//    uint8_t CodeChecker::HandleDigit(uint8_t digit)
//    {
//        if(digit == POUND)
//        {
//            if(index == 3) //right length
//            {
//                uint8_t success = (digits[0] == 2) && (digits[1] == 7) && (digits[2] == 5) && (digits[3] == 7);
//                ResetDigits();
//                return success;
//            }
//            else return 0;
//        }
       
//        else if(digit == STAR)
//        {
//            ResetDigits();
//            return 0;
//        }
       
//        else
//        {
//            if(index < 3) digits[index++] = digit;
//            return 0;
//        }

//        return 0;
//    }
