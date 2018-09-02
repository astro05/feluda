#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED


void takePlayerName();
void showPlayerName();
  
int gamestat=0;
char name[100];               //used to store player name
int nameL;                    //used to store name character in each array cell



/////////// Name input //////////
bool name_input = true;


void takePlayerName(char key)
{
	if(gamestat==2 && name_input)                           
	{                                        
		  
		if(key == '\r')
		{
			PlaySound("music//enter", NULL, SND_ASYNC);
			name_input=false;

		}

		else if(key == '\b')
		{
			
			if(nameL>0)
			{
				PlaySound("music//backspace", NULL, SND_ASYNC);
				nameL--;
				name[nameL] = '\0';               
			}
			if(nameL == 0)
				PlaySound("music//error", NULL, SND_ASYNC);
		}

		else 
		{
			PlaySound("music//button", NULL, SND_ASYNC);
			name[nameL] = key;           
			nameL++;
		}

	}
}

void showPlayerName()
{
	iClear();
	iShowImage(0,0,1024,768,nameinput);
	iSetColor(255,255,255);

	iRectangle(550,650,400,50);
	iSetColor(255,0,0);
	iText(570,670, name ,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
}


#endif // SCORE_H_INCLUDED
