#include<LPC214X.h>
void delay()
{
unsigned int i=0;
while(i<200000){
i++;
}
}
int main(){
IODIR0|=(0x01<<16);
while(1){
IOSET0|=(0x01<<16);
delay();
IOCLR0 |=(0x01<<16);
delay();}}
