/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********************************* Includes **************************************

//********************************* Variables *************************************

const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;

//*********************************** SETUP **************************************

void setup()
{
  DDRD = B11111111;
}
//************************************ LOOP *************************************

void loop()
{
   
   numero0();   
   delay(1000);
   numero0();
   numero1();
   delay(1000);
   numero0();
   numero2();
   delay(1000);
   numero0();
   numero3();
   delay(1000); 
   numero0();
   numero4();
   delay(1000);
   numero0();
   numero5();
   delay(1000);
   numero0();
   numero6();
   delay(1000);
   numero0();
   numero7();
   delay(1000);
   numero0();
   numero8();
   delay(1000);
   numero0();
   numero9();
   delay(1000);
    
}
//*************************************** FUNCIONS ********************************

void numero0(){PORTD = B01111111;}
void numero1(){PORTD = B00001100;}
void numero2(){PORTD = B10110110;}
void numero3(){PORTD = B10011111;}
void numero4(){PORTD = B11001100;}
void numero5(){PORTD = B11011011;}
void numero6(){PORTD = B11111011;}
void numero7(){PORTD = B00001110;}
void numero8(){PORTD = B11111111;}
void numero9(){PORTD = B11011111;}
