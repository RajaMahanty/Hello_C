#include <graphics.h>

main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	circle(200,300,100);
	Sleep(750);
	circle(150,250,50);
	Sleep(750);
	circle(100,200,0);
	getch();
	closegraph();
	return 0;
}
