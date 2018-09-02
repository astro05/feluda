#ifndef PICTURES_H_INCLUDED
#define PICTURES_H_INCLUDED
void load_all_image();
void characterimage();
void takename();
void storyimage();
void backgroundimage();
void introimage();
void menuimage();
void settingsimage();
void scoreimage();
void background();
void gameplayimage();
void enemyimage();

////////////////////CHARACTER IMAGE/////////////////////
int ch_image[18],k;
char character_image[18][25]= {"Characters\\1.png","Characters\\2.png","Characters\\3.png","Characters\\4.png","Characters\\5.png","Characters\\6.png","Characters\\7.png","Characters\\8.png","Characters\\9.png","Characters\\10.png","Characters\\11.png","Characters\\12.png","Characters\\13.png","Characters\\14.png","Characters\\15.png","Characters\\16.png","Characters\\17.png","Characters\\18.png"};
void characterimage()
{
    for(k=0; k<18; k++)
    {
        ch_image[k]=iLoadImage(character_image[k]);
    }
}



///////////////////MENU IMAGE/////////////////////////

int m_image[65],button1,button2,button3,button4,button5;
int button1_1,button2_1,button3_1;
int mpointer;
char menu_image[65][37]= {"Menu\\(17).jpg","Menu\\(18).jpg","Menu\\(19).jpg","Menu\\(20).jpg","Menu\\(21).jpg","Menu\\(22).jpg","Menu\\(23).jpg","Menu\\(24).jpg","Menu\\(25).jpg","Menu\\(26).jpg","Menu\\(27).jpg","Menu\\(28).jpg","Menu\\(29).jpg","Menu\\(30).jpg","Menu\\(31).jpg","Menu\\(32).jpg","Menu\\(33).jpg","Menu\\(34).jpg","Menu\\(35).jpg","Menu\\(36).jpg","Menu\\(37).jpg","Menu\\(38).jpg","Menu\\(39).jpg","Menu\\(40).jpg","Menu\\(41).jpg","Menu\\(42).jpg","Menu\\(43).jpg","Menu\\(44).jpg","Menu\\(45).jpg","Menu\\(46).jpg","Menu\\(47).jpg","Menu\\(48).jpg","Menu\\(49).jpg","Menu\\(50).jpg","Menu\\(51).jpg","Menu\\(52).jpg","Menu\\(53).jpg","Menu\\(54).jpg","Menu\\(55).jpg","Menu\\(56).jpg","Menu\\(57).jpg","Menu\\(58).jpg","Menu\\(59).jpg","Menu\\(60).jpg","Menu\\(61).jpg","Menu\\(62).jpg","Menu\\(63).jpg","Menu\\(64).jpg","Menu\\(65).jpg","Menu\\(66).jpg","Menu\\(67).jpg","Menu\\(68).jpg","Menu\\(69).jpg","Menu\\(70).jpg","Menu\\(71).jpg","Menu\\(72).jpg","Menu\\(73).jpg","Menu\\(74).jpg","Menu\\(75).jpg","Menu\\(76).jpg","Menu\\(77).jpg","Menu\\(78).jpg","Menu\\(79).jpg","Menu\\(80).jpg","Menu\\(81).jpg"};
void menuimage()
{
    ///Menu Background////
    for(int i =0; i<65; i++)
    {
        m_image[i]= iLoadImage(menu_image[i]);
    }
    ////Menu Button/////

    button1=iLoadImage("Button\\startgame.png");
    button2=iLoadImage("Button\\settings.png");
    button3=iLoadImage("Button\\score.png");
    button4=iLoadImage("Button\\exit.png");
    button5=iLoadImage("Button\\about.png");
	
	////Menu Button Rotate Features///
	button1_1= iLoadImage("Button\\startgame1.png");
    button2_1= iLoadImage("Button\\settings1.png");
    button3_1= iLoadImage("Button\\score1.png");
    mpointer=iLoadImage("Button\\pointer.png");
}
//////name///
int nameinput;
void takename()
{
 nameinput=iLoadImage("Score\\name input.png");
}
//////
int story[31],story_index=0;
void storyimage()
{
	for(int i=1;i<=31;i++,story_index++)
    {
    char a[30]="storyline//";
    char b[50];
    char c[40]=".jpg";
    itoa(i,b,10);
    strcat(a,b);
    strcat(a,c);
	story[story_index]=iLoadImage(a);
    }

}
//////////////////INTRO IMAGE///////////////////

int i_image[8];
char intro_image[8][25]= {"Intro\\Intro 1.bmp","Intro\\Intro 2.bmp","Intro\\Intro 3.bmp","Intro\\Intro 4.bmp","Intro\\Intro 5.bmp","Intro\\Intro 6.bmp","Intro\\Intro 7.bmp","Intro\\Intro 8.bmp"};
void introimage()
{
    for(k=0; k<9; k++)
    {
        i_image[k]=iLoadImage(intro_image[k]);
    }
}
///////////////////GAME BACKGROUND IMAGE/////////////

int bgimage1,bgimage2,bgimage3,bgimage4,bgimage5,bgimage6,bgimage7,bgimage7_1;
void background()
{
    bgimage1=iLoadImage("Background\\L1.jpg");
    bgimage2=iLoadImage("Background\\1.png");
    bgimage3=iLoadImage("Background\\2.png");
    bgimage4=iLoadImage("Background\\2.1.png");
    bgimage5=iLoadImage("Background\\4.png");
    //
    bgimage6=iLoadImage("Background\\5.png");
    //
	bgimage7=iLoadImage("Background\\L1.1.png");
	bgimage7_1=iLoadImage("Background\\L1.2.png");
}
//////////////IN GAME MATERIALS////////////////////////
int heart,playerhealth[6];
int barrel1,barrel2,barrel2_1,barrel2_2,barrel3,barrel4,clue1,caption[4],arrow;
void game_material()
{
heart=iLoadImage("Background\\heart.png");
playerhealth[1]=iLoadImage("Background\\h1.png");
playerhealth[2]=iLoadImage("Background\\h2.png");
playerhealth[3]=iLoadImage("Background\\h3.png");
playerhealth[4]=iLoadImage("Background\\h4.png");
playerhealth[5]=iLoadImage("Background\\h5.png");
barrel1=iLoadImage("Background\\barrel1.png");
barrel2=iLoadImage("Background\\barrel2.png");
barrel2_1=iLoadImage("Background\\barrel2_1.png");
barrel2_2=iLoadImage("Background\\barrel2_2.png");
barrel3=iLoadImage("Background\\barrel3.png");
barrel4=iLoadImage("Background\\barrel4.png");
clue1=iLoadImage("Background\\clue1.png");
caption[1]=iLoadImage("Background\\caption1.png");
caption[2]=iLoadImage("Background\\caption2.png");
caption[3]=iLoadImage("Background\\caption3.png");
arrow=iLoadImage("Background\\arrow3.png");
}
////////////////SETTINGS IMAGE////////////////////////
int settingpic,musicbutton;
void settingsimage()
{
    settingpic=iLoadImage("Settings\\settings2.png");
    musicbutton=iLoadImage("Button\\music.png");
}

/////////////////SCORE  IMAGE/////////////////
int scorepic;
void scoreimage()
{
    scorepic=iLoadImage("score\\score.jpg");
}
///////////////////////////////GAMEPLAY IMAGE////////////////////////////////


int punch[7]/*kick1,kick2,kick3,kick4,kick5,kick6*/,kick[7],/*gun1,gun2,gun3,gun4,gun5,gun6,jump1,jump2,jump3,jump4,jump5,jump6*/gun[7],jump[7],defendLeft,defendRight;
void gameplayimage()
{

    punch[1]=iLoadImage("punch\\punch1.png");
    punch[2]=iLoadImage("punch\\punch2.png");
    punch[3]=iLoadImage("punch\\punch3.png");
    punch[4]=iLoadImage("punch\\punch4.png");
    punch[5]=iLoadImage("punch\\punch5.png");
    punch[6]=iLoadImage("punch\\punch6.png");
    kick[1]=iLoadImage("kick\\(1).png");
    kick[2]=iLoadImage("kick\\(2).png");
    kick[3]=iLoadImage("kick\\(3).png");
    kick[4]=iLoadImage("kick\\(4).png");
    kick[5]=iLoadImage("kick\\(5).png");
    kick[6]=iLoadImage("kick\\(6).png");
    gun[1]=iLoadImage("Gun\\(1).png");
    gun[2]=iLoadImage("Gun\\(2).png");
    gun[3]=iLoadImage("Gun\\(3).png");
    gun[4]=iLoadImage("Gun\\(4).png");
    gun[5]=iLoadImage("Gun\\(5).png");
    gun[6]=iLoadImage("Gun\\(6).png");
    jump[1]=iLoadImage("jump\\jump0.png");
    jump[2]=iLoadImage("jump\\jump1.png");
    jump[3]=iLoadImage("jump\\jump2.png");
    jump[4]=iLoadImage("jump\\jump3.png");
    jump[5]=iLoadImage("jump\\jump4.png");
    jump[6]=iLoadImage("jump\\jump5.png");
	defendLeft=iLoadImage("Block\\blockLeft.png");
	defendRight=iLoadImage("Block\\blockRight.png");
}


////////////////////////////////////ENEMY IMAGE/////////////////////////////////
int e_image[10],e_punch[8],e_kick[8],e_health[7],e_death[9];
int e2_image[10],e2_punch[8],e2_kick[8],e2_death[9];
int e3_run[6];
void enemyimage()
{
    e_image[1]=iLoadImage("enemy\\walk\\(1).png");
    e_image[2]=iLoadImage("enemy\\walk\\(2).png");
    e_image[3]=iLoadImage("enemy\\walk\\(3).png");
    e_image[4]=iLoadImage("enemy\\walk\\(4).png");
    e_image[5]=iLoadImage("enemy\\walk\\(5).png");
    e_image[6]=iLoadImage("enemy\\walk\\(6).png");
    e_image[7]=iLoadImage("enemy\\walk\\(7).png");
    e_image[8]=iLoadImage("enemy\\walk\\(8).png");
	e_punch[1]=iLoadImage("enemy\\punch\\(1).png");
    e_punch[2]=iLoadImage("enemy\\punch\\(2).png");
    e_punch[3]=iLoadImage("enemy\\punch\\(3).png");
    e_punch[4]=iLoadImage("enemy\\punch\\(4).png");
    e_punch[5]=iLoadImage("enemy\\punch\\(5).png");
    e_punch[6]=iLoadImage("enemy\\punch\\(6).png");
	e_punch[7]=iLoadImage("enemy\\punch\\(7).png");
    e_kick[1]=iLoadImage("enemy\\kick\\(1).png");
    e_kick[2]=iLoadImage("enemy\\kick\\(2).png");
    e_kick[3]=iLoadImage("enemy\\kick\\(3).png");
    e_kick[4]=iLoadImage("enemy\\kick\\(4).png");
    e_kick[5]=iLoadImage("enemy\\kick\\(5).png");
    e_kick[6]=iLoadImage("enemy\\kick\\(6).png");
    e_kick[7]=iLoadImage("enemy\\kick\\(7).png");
	e_death[1]=iLoadImage("enemy\\Dead\\dead right 1.png");
	e_death[2]=iLoadImage("enemy\\Dead\\dead right 2.png");
	e_death[3]=iLoadImage("enemy\\Dead\\dead right 3.png");
	e_death[4]=iLoadImage("enemy\\Dead\\dead right 4.png");
	e_health[1]=iLoadImage("Background\\enemyhealth1.png");
	e_health[2]=iLoadImage("Background\\enemyhealth2.png");
	e_health[3]=iLoadImage("Background\\enemyhealth3.png");
	e_health[4]=iLoadImage("Background\\enemyhealth4.png");
	e_health[5]=iLoadImage("Background\\enemyhealth5.png");
	e_health[6]=iLoadImage("Background\\enemyhealth6.png");

	//
	e2_image[1]=iLoadImage("enemy\\villain1\\walk\\1.png");
    e2_image[2]=iLoadImage("enemy\\villain1\\walk\\2.png");
    e2_image[3]=iLoadImage("enemy\\villain1\\walk\\3.png");
    e2_image[4]=iLoadImage("enemy\\villain1\\walk\\4.png");
    e2_image[5]=iLoadImage("enemy\\villain1\\walk\\5.png");
    e2_image[6]=iLoadImage("enemy\\villain1\\walk\\6.png");
    e2_image[7]=iLoadImage("enemy\\villain1\\walk\\7.png");
    e2_image[8]=iLoadImage("enemy\\villain1\\walk\\8.png");
	e2_image[9]=iLoadImage("enemy\\villain1\\walk\\9.png");
	e2_punch[1]=iLoadImage("enemy\\villain1\\punch\\(1).png");
    e2_punch[2]=iLoadImage("enemy\\villain1\\punch\\(2).png");
    e2_punch[3]=iLoadImage("enemy\\villain1\\punch\\(3).png");
    e2_punch[4]=iLoadImage("enemy\\villain1\\punch\\(4).png");
    e2_punch[5]=iLoadImage("enemy\\villain1\\punch\\(5).png");
    e2_punch[6]=iLoadImage("enemy\\villain1\\punch\\(6).png");
	e2_punch[7]=iLoadImage("enemy\\villain1\\punch\\(7).png");
    e2_kick[1]=iLoadImage("enemy\\villain1\\kick\\(1).png");
    e2_kick[2]=iLoadImage("enemy\\villain1\\kick\\(2).png");
    e2_kick[3]=iLoadImage("enemy\\villain1\\kick\\(3).png");
    e2_kick[4]=iLoadImage("enemy\\villain1\\kick\\(4).png");
    e2_kick[5]=iLoadImage("enemy\\villain1\\kick\\(5).png");
    e2_kick[6]=iLoadImage("enemy\\villain1\\kick\\(6).png");
    e2_kick[7]=iLoadImage("enemy\\villain1\\kick\\(7).png");
	e2_death[1]=iLoadImage("enemy\\villain1\\Dead\\dead right 1.png");
	e2_death[2]=iLoadImage("enemy\\villain1\\Dead\\dead right 2.png");
	e2_death[3]=iLoadImage("enemy\\villain1\\Dead\\dead right 3.png");
	e2_death[4]=iLoadImage("enemy\\villain1\\Dead\\dead right 4.png");
	e3_run[1]=iLoadImage("enemy\\villain3\\run\\run1.png");
	e3_run[2]=iLoadImage("enemy\\villain3\\run\\run2.png");
	e3_run[3]=iLoadImage("enemy\\villain3\\run\\run3.png");
	e3_run[4]=iLoadImage("enemy\\villain3\\run\\run4.png");
	e3_run[5]=iLoadImage("enemy\\villain3\\run\\run5.png");
}


/////////////////////////////// ABOUT IMAGE ///////////////////////////
int aimage[43];
void aboutimage()
{
    for(int j=0,i=1; i<=43; i++,j++)
    {
        char a[50]="about//(";
        char b[60];
        char c[50]=").jpg";
        itoa(i,b,10);
        strcat(a,b);
        strcat(a,c);
        aimage[j]=iLoadImage(a);

    }

}
void load_all_image()
{
    menuimage();
    characterimage();
    introimage();
	takename();
	storyimage();
    background();
    scoreimage();
    settingsimage();
    gameplayimage();
    aboutimage();
    enemyimage();
	game_material();
}

   
#endif
