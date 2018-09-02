#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED

void timer1();
void timer2();
void timer3();
void timer4();
int a=0;
int nm=0;
int timer[5];



//////////Timer For Menu///////////
void timer1()
{
if(gamestat==1&&a==0) 
{
timer[1]=iSetTimer(200,changemenu);
a++;
}
}
/*
//////////////Timer For Character/////////
void timer2()
{   
	if(gamestat=2&&nm==0)
	{
	iSetTimer(200,changeplayer);
	nm++;
	}
}*/
void timer2()
{   
	if(nm==0)
	{
	iSetTimer(100,playermove);
	iSetTimer(100,enemymove);
	iSetTimer(50,change);
	nm++;
	}
}

#endif