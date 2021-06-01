#include "my_lib.h"

void start_game()
{
	N5110_Clear();
	N5110_SetFont(SmallFont);
	N5110_PrintStr(N5110_MAX_WIDTH/2-(5*6), 3, "Project II", true);
	N5110_SetFont(TinyFont);
	N5110_PrintStr(N5110_MAX_WIDTH/2-(5*4), 15, "Game Sanke", true);
	N5110_DrawLine(20,25,74,25,true);

	for(int i = 19; i >= 10; i--) {
		N5110_SetPixel(i,45-i,true);
	}

	for(int i = 72; i >= 63; i--) {
		N5110_SetPixel(i,98-i,true);
	}

	N5110_DrawLine(9,36,63,36,true);
	N5110_DrawLine(16,29,33,29,true);
	N5110_DrawLine(69,29,52,29,true);

	for(int i = 36; i >= 27; i--) {
		N5110_SetPixel(i,62-i,true);
	}

	N5110_DrawLine(12,33,29,33,true);
	N5110_DrawLine(65,33,48,33,true);

	for(int i = 55; i >= 46; i--) {
		N5110_SetPixel(i,81-i,true);
	}

	N5110_SetFont(SmallFont);
	for(int i = 5; i >= 1; i--) {
		N5110_PrintChar(38, 27, (char)((int)'0' + i), true);
		N5110_Update();
		HAL_Delay(1000);
	}
	N5110_Update();
}

void snake(int x, int y)
{
	N5110_DrawCircle(x,y,1,true,false);
}

void egg(int x, int y)
{
	N5110_DrawRect(x-1,y-1,x+1,y+1,true,true);
}