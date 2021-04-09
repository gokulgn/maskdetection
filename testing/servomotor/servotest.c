#include <wiringPi.h>
#include <stdio.h>

int main (void)
{
   printf ("Raspberry Pi wiringPi test program\n");
   wiringPiSetupGpio();
   pinMode (18, PWM_OUTPUT) ;
   pwmSetMode (PWM_MODE_MS);
   pwmSetRange (2000);
   pwmSetClock (192);
while(1){
   pwmWrite(18,150);
   delay(1000);
   pwmWrite(18,200);
   delay(1000);
}
   return 0;
}
