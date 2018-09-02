#ifndef PICTURES_H_INCLUDED
#define PICTURES_H_INCLUDED

void characterimage();
void backgroundimage();
void intro();
void menu();

////////////////////CHARACTERIMAGE/////////////////////
int image[9],k,image1;
char name[9][20]={"Characters\\1.png","Characters\\2.png","Characters\\3.png","Characters\\4.png","Characters\\5.png","Characters\\6.png","Characters\\7.png","Characters\\8.png","Characters\\9.png"};
void characterimage()
{
for(k=0;k<9;k++)
	{
	image[k]=iLoadImage(name[k]);
	}
}




#endif
