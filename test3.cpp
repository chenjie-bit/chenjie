#include<iostream>
#include<easyx.h>
#include<graphics.h>
#include<conio.h>
using namespace std;



int main()
{
	initgraph(640, 480, EW_SHOWCONSOLE);

	int x = 0, y = 0;
	while (true)
	{
		IMAGE img;
		loadimage(&img, "./11.jpg", 345, 517);
		
		BeginBatchDraw();
		cleardevice();
		putimage(0, 0, &img);
		FlushBatchDraw();
		setfillcolor(BROWN);
		fillcircle(x, y, 10);
		EndBatchDraw();

		if (_kbhit())
		{
			int key = _getch();


			switch (key)
			{
			case 72:
			case 'w':
			case 'W':
				y -= 5;
				cout << "ио" << endl;
				break;
			case 80:
			case 's':
			case 'S':
				y += 5;
				cout << "об" << endl;
				break;
			case 75:
			case 'a':
			case 'A':
				x -= 5;
				cout << "вС" << endl;
				break;
			case 77:
			case 'd':
			case 'D':
				x += 5;
				cout << "ср" << endl;
				break;
			}
		}
		
		
	}


	system("pause");
	return 0;
}