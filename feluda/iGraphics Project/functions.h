/* this header file includes user define functions   */



#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include "Score.h";
void showintro();
void showmenu();
void changemenu();
void showStory();
void showsettings();
void showscore();
void startgame();
void walk();
void showabout();
void blink();
int road,night,building,tree,cc,dd,ee,ff;
int r,g,b;
//
void enemyshowdown();
void enemyshowdown2();
void enemyshowdown3();
void change();
void initializeValue();
//

///////////////////////SHOWING INTRO/////////////////////////////////////
int j;
void showintro()
{

    iShowImage(0,0,1024,768,i_image[j]);
    iDelayMS(100);
    j++;
    if(j>7)
        j=6;
    iText(420,100,"Press Mouse Button to Continue");
}


////////////////////////SHOWING MENU//////////////////////////////
int u=0;
void showmenu()
{
    iShowImage(0,0,1024,768,m_image[u]);
    iShowImage(20,590,200,130,button1);
    iShowImage(20,410,200,130,button2);
    iShowImage(20,240,200,130,button3);
    iShowImage(20,70,200,130,button4);
    iShowImage(900,70,100,100,button5);
}

////////////////////////////MENU CHANGE///////////////
void changemenu()
{
    u++;
    if(u>64)
        u=0;
}


///////////////////////// MENU BLINK/////////////////
int pointer=0,blink1=0,blink2 =0,blink3=0,blink4= 0;


void blink()
{
	if(pointer ==1)
        iShowImage(iMouseX-25,iMouseY-30,60,60,mpointer);

    if(blink1 ==1 && gamestat==1 )
    {
        iRotate(90,670,rand()%25);
        iShowImage(50,630,80,80,button1_1);
		iDelayMS(200);
        iUnRotate();

    }
    if(blink2 ==1 && gamestat==1 )
    {
        iRotate(90,490,rand()%25);
        iShowImage(50,420,150,150,button2_1);
		iDelayMS(200);
        iUnRotate();

    }
    if(blink3 ==1 && gamestat==1 )
    {
        iRotate(90,330,rand()%25);
        iShowImage(50,270,100,100,button3_1);
		iDelayMS(200);
        iUnRotate();

    }


}





/////////////////////SHOW STORYLINE/////////////
bool storyMode=true,gameStart=false;
int storyIndex=0;
int delay;
void showStory()
{
	iShowImage(0,0,1024,768,story[storyIndex]);
      if(storyIndex<7)
		  delay=150;
	   if(storyIndex>6&&storyIndex<15)
		  delay=1500;
	    if(storyIndex>15)
		  delay=350;
	   iDelayMS(delay);
		storyIndex++;
		if(storyIndex>30)
		{
			storyMode=false;
			initializeValue();
			gameStart=true;
		}
}

///////////////////STARTING GAME///////////////
int initialize=0;
int i=0,phase=0,h=9,x=0,moveright_index=4,moveleft_index=1,s=0,y=70,enemyx=700,enemymoveright_index=4,enemymoveleft_index=1;
int playerHeight=180+60,playerWidth=220+60,playerhealth_index=1;
int collisionBarrel=0,collisiondistract=0;
int evidenceCollect=0;
int inventoryMode=0;
int enemyPhase=0,enemyIndex=1,positionmode=3,caption_index=1,captionX=enemyx+30,enemyhealth=0,ehealth_index=1,enemyCount=1;
int dumpX[1],dumpIndex=0;
int level=1;
bool captionOn=true,defending=false,enemyDeath=false,nextBar=false;
int enemy3x=450,enemy3index=1;

//
int bx=1024,flag=0;

//

void startgame()
{
   if(level==1)
   {

	if(!gameStart)
	{
	if(name_input)
	{
	showPlayerName();
	}
	if(!name_input)
	{
    if(storyMode)
	{
	showStory();
	}
	}
	}
	/*
    iShowImage(0,350,1024,250,bgimage2);
    iShowImage(0,300,1024,250,bgimage3);
    iShowImage(0,140,1024,350,bgimage4);
    iShowImage(0,50,1024,100,bgimage5);
    iShowImage(-200,50,1024,100,bgimage5);
    iShowImage(700,50,1024,100,bgimage5);
    */
	if(gameStart)
	{
   iShowImage(0,0,1024,768,bgimage1);
   iShowImage(30,700,40,40,heart);
    iShowImage(75,702,120,40,playerhealth[playerhealth_index]);
	 iShowImage(500,70,200,220,barrel2);


    if(flag==1)
        iShowImage(bx,450,400,400,bgimage6);

    if(phase==0)
        iShowImage(x,y,playerHeight,playerWidth,ch_image[8]);

    if(phase==1)
    {
        iShowImage(x,y,playerHeight,playerWidth,ch_image[i]);

    }
    if(phase==2)
    {
        iShowImage(x,y,playerHeight,playerWidth,ch_image[h]);

    }
	if(phase==3)
        iShowImage(x,y,playerHeight,playerWidth,ch_image[17]);

    if(phase==4)
    {

        iShowImage(x,y,playerHeight,playerWidth,punch[moveright_index]);


    }
    if(phase==5)
    {

        iShowImage(x,y,playerHeight,playerWidth,punch[moveleft_index]);

    }
    if(phase==6)
    {

        iShowImage(x,y,playerHeight,playerWidth,kick[moveleft_index]);

    }

    if(phase==7)
    {

        iShowImage(x,y,playerHeight,playerWidth,kick[moveright_index]);

    }
    if(phase==8)
    {
        iShowImage(x,y,playerHeight,playerWidth,gun[moveright_index]);

    }
    if(phase==9)
    {

        iShowImage(x,y,playerHeight,playerWidth,gun[moveleft_index]);

    }
    if(phase==10)
    {
        iShowImage(x,y,playerHeight,playerWidth,jump[moveright_index]);
    }
    if(phase==11)
    {
        iShowImage(x,y,playerHeight,playerWidth,jump[moveleft_index]);

    }
	if(phase==12)
	{
		iShowImage(x,y,playerHeight+50,playerWidth+20,defendRight);
	}

    /////////////Enemy///////////////////
	enemyshowdown();
	if(enemyCount>1)
	 iShowImage(dumpX[0],70,190,75,e_death[4]);
	if(enemyCount==2)
	{
		if(initialize==0)
		{
			enemyx=900,enemymoveright_index=4,enemymoveleft_index=1;
	enemyPhase=0,enemyIndex=1,positionmode=3,enemyhealth=0,ehealth_index=1;
	defending=false,enemyDeath=false;
	    initialize++;
		}
	enemyshowdown();
	}

	///Latest Works...../////////////
	 if(collisionBarrel==0)
	 {
	 iShowImage(800,50,200,220,barrel2);
	 }
	 if(collisionBarrel==1)
	 {
      iShowImage(760,40,280,280,barrel2_1);
	 }
	 if(collisionBarrel==2)
	 {
      iShowImage(830,50,110,90,barrel2_2);
	  collisionBarrel++;
	 }
	  if(collisionBarrel==3)
	  {
	    iShowImage(830,50,110,90,clue1);
		iText(760,40,"Press F to Collect The Evidence");
	  }
	iShowImage(10,10,200,190,barrel3);
	if(collisionBarrel==0)
	{
	if(x>=740)
	{
		x=740;
	}
	}
	if(x>=720)
	{
		if(collisiondistract==1)
		{
		if(phase==4||phase==6)
		{
			collisionBarrel++;
			collisiondistract=0;
		}
		}
	}
	if(x>=740)
	{
	if(evidenceCollect==1)
	{
		iShowBMP2(0,0,"Background\\paper.bmp",0);
		iText(10,10,"Press F To Close");
		collisionBarrel++;
		nextBar=true;
	}
	}
	if(nextBar)
	{
	 iShowImage(940,600,80,50,arrow);
     iSetColor(r,g,b);
	iText(940,560,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
	 iSetColor(255,255,255);
	}
    }
	if(x>screenWidth+20)
	{
		level=2;
	}
	}
	if(level==2)
	{
		if(initialize==1)
		{
			initializeValue();
			initialize++;
		}
		iShowImage(0,0,1024,768,bgimage7);
		 iShowImage(30,700,40,40,heart);
    iShowImage(75,702,120,40,playerhealth[playerhealth_index]);
	if(flag==1)
        iShowImage(bx,450,400,400,bgimage6);

    if(phase==0)
        iShowImage(x,y,playerHeight,playerWidth,ch_image[8]);

    if(phase==1)
    {
        iShowImage(x,y,playerHeight,playerWidth,ch_image[i]);

    }
    if(phase==2)
    {
        iShowImage(x,y,playerHeight,playerWidth,ch_image[h]);

    }
	if(phase==3)
        iShowImage(x,y,playerHeight,playerWidth,ch_image[17]);

    if(phase==4)
    {

        iShowImage(x,y,playerHeight,playerWidth,punch[moveright_index]);


    }
    if(phase==5)
    {

        iShowImage(x,y,playerHeight,playerWidth,punch[moveleft_index]);

    }
    if(phase==6)
    {

        iShowImage(x,y,playerHeight,playerWidth,kick[moveleft_index]);

    }

    if(phase==7)
    {

        iShowImage(x,y,playerHeight,playerWidth,kick[moveright_index]);

    }
    if(phase==8)
    {
        iShowImage(x,y,playerHeight,playerWidth,gun[moveright_index]);

    }
    if(phase==9)
    {

        iShowImage(x,y,playerHeight,playerWidth,gun[moveleft_index]);

    }
    if(phase==10)
    {
        iShowImage(x,y,playerHeight,playerWidth,jump[moveright_index]);
    }
    if(phase==11)
    {
        iShowImage(x,y,playerHeight,playerWidth,jump[moveleft_index]);

    }
	if(phase==12)
	{
		iShowImage(x,y,playerHeight+50,playerWidth+20,defendRight);
	}
	enemyshowdown2();
	enemyshowdown3();
	iShowImage(0,0,1024,200,bgimage7_1);
	}
}
/////////////////////////SHOWING SETTINGS////////////////////////
void showsettings()
{
    iShowImage(0,0,1024,768,settingpic);
    iShowImage(550,375,80,80,musicbutton);
}

////////////////////// SHOW SCORE//////////////

void showscore()
{
    iShowImage(0,0,1024,768,scorepic);
}

/////////////// SHOW ABOUT /////////////////
int ai=0;
void showabout()
{
    iShowImage(0,0,1024,786,aimage[ai]);
    iDelayMS(250);
    ai++;
    if(ai>42)
        ai=0;


}
void playermove()
{
	if(phase==1)
	{
	x=x+12;
        i++;
        if(i>8)
            i=0;
        phase=0;
	}

	  if(phase==2)
    {
        x=x-12;
        h++;
        if(h>17)
            h=9;
        phase=3;
    }
	   if(phase==4)
    {
       moveright_index++;
        if(moveright_index>6)
        {
            phase=0;
           moveright_index=4;
        }
	   }
	       if(phase==5)
    {
       moveleft_index++;
        if(moveleft_index>3)
        {
            phase=3;
            moveleft_index=1;
        }
    }
    if(phase==6)
    {
        moveleft_index++;
        if(moveleft_index>3)
        {
            phase=0;
            moveleft_index=1;
        }
    }

    if(phase==7)
    {
       moveright_index++;
        if(moveright_index>6)
        {
            phase=3;
            moveright_index=4;
	}
	}
	 if(phase==8)
    {
       moveright_index++;
        if(moveright_index>6)
        {
            phase=0;
           moveright_index=4;
        }
    }
    if(phase==9)
    {
        moveleft_index++;
        if(moveleft_index>3)
        {
            phase=3;
            moveleft_index=1;
        }
    }
    if(phase==10)
    {
        if(s==0)
        {
            moveright_index++;
            y+=10;
        }
        if(moveright_index>6)
        {
            s=1;
        }
        if(s==1)
        {
            moveright_index--;
            y-=10;
        }
        if(s==1&&moveright_index==4)
        {
            phase=0;
            moveright_index=4;
            s=0;
        }
    }
    if(phase==11)
    {
		if(s==0)
		{
			moveleft_index++;
			y+=10;
		}
		if(moveleft_index>3)
		{
			s=1;
		}
		if(s==1)
		{
			moveleft_index--;
			y-=10;
		}
		if(s==1&&moveleft_index==1)
		{
			phase=3;
			moveleft_index=1;
			s=0;
		}
	}

}

void enemyshowdown()
{
	if(!enemyDeath)
	{
	if(enemyx>=x+30)
		enemyPhase=0;
    printf("%d",enemyPhase);
	if(enemyPhase==0)
    {
        iShowImage(enemyx,70,320,260,e_image[enemyIndex]);

    }
	if(enemyPhase==1)
	{
        iShowImage(enemyx,70,320,260,e_image[1]);
		positionmode=rand()%3+1;
	}
	if(enemyPhase==2)
	{
		 iShowImage(enemyx+70,90,240,200,e_punch[enemymoveleft_index]);
	}
	if(enemyPhase==3)
	{
        iShowImage(enemyx+70,90,240,200,e_kick[enemymoveleft_index]);
	}
	if(enemyPhase==6)
	{
		iShowImage(enemyx,70,190,75,e_death[enemymoveleft_index]);
		enemyDeath=true;
	}
    if(enemyx<=x+30)
    {
		if(captionOn)
		{
			enemyPhase=1;
			if(caption_index==2)
			captionX=enemyx-180;
			else
			captionX=enemyx+90;
			iDelayMS(200);
			iShowImage(captionX,270,260,260,caption[caption_index]);
			iDelayMS(1000);
			caption_index++;
			if(caption_index>4)
			captionOn=false;
		}
		else

		{
		enemyPhase=positionmode;
        if(phase==4||phase==5||phase==6||phase==7||phase==8)
            if(enemyx<=x+2)
            {
                enemyx+=6;
				ehealth_index++;
				if(ehealth_index>6)
					enemyPhase=6;

            }
			if(!defending)
			{
			if(enemyPhase==2||enemyPhase==3)
            if(enemyx<=x+2)
            {
				playerhealth_index++;
				if(playerhealth_index>5)
				{playerhealth_index=1;
					//phase=13;
					;}
            }
			}
		}
	}
	}
	if(enemyDeath)
	{
		enemyPhase=6;
		if(enemyPhase==6)
	{
		iShowImage(enemyx,70,190,75,e_death[enemymoveleft_index]);
		dumpX[dumpIndex]=enemyx;
		if(dumpIndex<1)
			dumpIndex++;
	}

		enemyCount++;
	}
	iShowImage(enemyx+150,300,100,15,e_health[ehealth_index]);



}

void enemymove()
{
   if(level==1)
   {
	if(enemyPhase==0)
	 {
        enemyx=enemyx-10;
        enemyIndex++;
        if(enemyIndex>8)
            enemyIndex=1;
	 }
	 if(enemyPhase==2)
	 {
		  enemymoveleft_index++;
        if(enemymoveleft_index>7)
        {
            enemymoveleft_index=1;
			positionmode=rand()%3+1;
        }

	 }
    if(enemyPhase==3)
	{
		 enemymoveleft_index++;
        if(enemymoveleft_index>7)
        {
           positionmode=rand()%3+1;
			printf("%d",enemyPhase);
            enemymoveleft_index=1;
        }

	}

	if(enemyPhase==4)
	{
		//kick right

	}
	if(enemyPhase==5)
	{
		//move right

	}
	if(enemyPhase==5)
	{
		// punch right

	}
	if(enemyPhase==6)
	{
		enemymoveleft_index++;
        if(enemymoveleft_index>4)
        {
            enemymoveleft_index=4;
			enemyDeath=true;
        }
	}
   }
  if(level==2)
  {
  if(enemyPhase==0)
	 {
        enemyx=enemyx-10;
        enemyIndex++;
        if(enemyIndex>9)
            enemyIndex=1;
	 }
	 if(enemyPhase==2)
	 {
		  enemymoveleft_index++;
        if(enemymoveleft_index>3)
        {
            enemymoveleft_index=1;
			positionmode=rand()%3+1;
        }

	 }
    if(enemyPhase==3)
	{
		 enemymoveleft_index++;
        if(enemymoveleft_index>3)
        {
           positionmode=rand()%3+1;
			printf("%d",enemyPhase);
            enemymoveleft_index=1;
        }

	}

	if(enemyPhase==4)
	{
		//kick right

	}
	if(enemyPhase==5)
	{
		//move right

	}
	if(enemyPhase==5)
	{
		// punch right

	}
	if(enemyPhase==6)
	{
		enemymoveleft_index++;
        if(enemymoveleft_index>4)
        {
            enemymoveleft_index=4;
			enemyDeath=true;
        }
	}
	enemy3index++;
	enemy3x+=20;
	if(enemy3index>5)
		enemy3index=1;
  }
}

void initializeValue()
{

 i=0,phase=0,h=9,x=0,moveright_index=4,moveleft_index=1,s=0,y=70,enemyx=700,enemymoveright_index=4,enemymoveleft_index=1;
 playerHeight=180+60,playerWidth=220+60,playerhealth_index=1;
 collisionBarrel=0,collisiondistract=0;
 evidenceCollect=0;
 inventoryMode=0;
 enemyPhase=0,enemyIndex=1,positionmode=3,caption_index=1,captionX=enemyx+30,enemyhealth=0,ehealth_index=1,enemyCount=1;
 dumpX[1],dumpIndex=0;
 enemyDeath=false;
}

void enemyshowdown2()
{
	if(!enemyDeath)
	{
	if(enemyx>=x+30)
		enemyPhase=0;
    printf("%d",enemyPhase);
	if(enemyPhase==0)
    {
        iShowImage(enemyx,70,325,265,e2_image[enemyIndex]);

    }
	if(enemyPhase==1)
	{
        iShowImage(enemyx,70,325,265,e2_image[9]);
		positionmode=rand()%3+1;
	}
	if(enemyPhase==2)
	{
		 iShowImage(enemyx,70,330,260,e2_punch[enemymoveleft_index]);
	}
	if(enemyPhase==3)
	{
        iShowImage(enemyx,70,330,260,e2_kick[enemymoveleft_index]);
	}
	if(enemyPhase==6)
	{
		iShowImage(enemyx,70,330,260,e2_death[enemymoveleft_index]);
		enemyDeath=true;
	}
    if(enemyx<=x+30)
    {
		if(captionOn)
		{
			enemyPhase=1;
			if(caption_index==2)
			captionX=enemyx-180;
			else
			captionX=enemyx+90;
			iDelayMS(200);
			iShowImage(captionX,270,260,260,caption[caption_index]);
			iDelayMS(1000);
			caption_index++;
			if(caption_index>4)
			captionOn=false;
		}
		else

		{
		enemyPhase=positionmode;
        if(phase==4||phase==5||phase==6||phase==7||phase==8)
            if(enemyx<=x+2)
            {
                enemyx+=6;
				ehealth_index++;
				if(ehealth_index>6)
					enemyPhase=6;

            }
			if(!defending)
			{
			if(enemyPhase==2||enemyPhase==3)
            if(enemyx<=x+2)
            {
				playerhealth_index++;
				if(playerhealth_index>5)
				{playerhealth_index=1;
					//phase=13;
					;}
            }
			}
		}
	}
	}
	if(enemyDeath)
	{
		enemyPhase=6;
		if(enemyPhase==6)
	{
		iShowImage(enemyx,70,330,260,e2_death[enemymoveleft_index]);
		dumpX[dumpIndex]=enemyx;
		if(dumpIndex<1)
			dumpIndex++;
	}

		enemyCount++;
	}
	iShowImage(enemyx+150,300,100,15,e_health[ehealth_index]);

}

void enemyshowdown3()
{
	iShowImage(enemy3x,70,400,265,e3_run[enemy3index]);
}
#endif
