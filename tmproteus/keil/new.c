#include <AT89X52.H>

unsigned char code taba[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
unsigned char code tabb[]={0x18,0x18,0xFF,0xFF,0x18,0x3C,0x66,0xC3};
unsigned char code tabc[]={0xFF,0xFF,0x18,0x18,0x18,0x18,0xFF,0xFF};
unsigned char code tabd[]={0xC3,0xC7,0xCF,0xDF,0xFB,0xF3,0xE3,0xC3};
unsigned char code tabe[]={0x3C,0x7E,0xC3,0xC3,0xC3,0xC3,0x7E,0x3C};
unsigned char code tabf[]={0x1C,0x1E,0x1F,0x19,0x18,0x18,0xFF,0xFF};
unsigned char i,j;

void delay(void)
{
  unsigned char i,j;
  for(i=10;i>0;i--)
  for(j=24;j>0;j--);
}

void delay1(void)
{
  unsigned char i,j,k;
  for(k=10;k>0;k--)
  for(i=20;i>0;i--)
  for(j=24;j>0;j--);

}

void main(void)
{
 
  while(1)
    {
      for(j=0; j<10; j++) 
        {
          for(i=0;i<8;i++)
            {
              P2=taba[i];
              P3=tabb[i];
			  
              delay();
            }
        }
	 
          for(i=0;i<8;i++)
            {
              P2=taba[i];
			  P3=0xff;
              delay1();
            }

     for(j=0; j<10; j++) 
        {
          for(i=0;i<8;i++)
            {
              P2=taba[i];
              P3=tabc[i];

              delay();
            }
        }
     for(i=0;i<8;i++)
	    {
	     delay1();
		 }
     for(j=0; j<10; j++)
        {
          for(i=0;i<8;i++)
            {
              P2=taba[i];
              P3=tabd[i]; 

              delay();
            }
        }
    for(i=0;i<8;i++)
            {
              P2=taba[7-i];
             
			  P3=0xff;
              delay1();
            }
	   for(i=0;i<8;i++)
	    {
	     delay1();
		 }
      for(j=0; j<10; j++)
        {
          for(i=0;i<8;i++)
            {
              P2=taba[i];
              P3=tabe[i];
              delay();
            }
        }
	 for(i=0;i<8;i++)
	    {
	     delay1();
		 }
     for(j=0; j<10; j++) 
        {
          for(i=0;i<8;i++)
            {
              P2=taba[i];
              P3=tabf[i];
              delay();
            }
        }
	 for(i=0;i<8;i++)
	    {
	     delay1();
		 }

     }
 }
