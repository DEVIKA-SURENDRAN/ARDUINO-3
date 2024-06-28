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
IODIR1 &=~(0x01<<16);

while(1){
if((IOPIN1 &(1<<16))==0){
IOSET0|=(0x01<<16);
} else{

IOCLR0 |=(0x01<<16);
}
delay()	 ;
}}
