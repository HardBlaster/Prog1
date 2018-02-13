#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
using namespace std;

void print_there(int x, int y, const string& text)
{
    printf("\033[%d;%dH%s\n", x, y, text.c_str());
}
int main()
{
    int xj = 0, xk = 0, yj = 0, yk = 0;
    int mx = 80 * 2;
    int my = 24 * 2;
    int x, y;
    for (;;)
    {
	xj = (xj - 1) % mx;
	xk = (xk + 1) % mx;
	
	yj = (yj - 1) % my;
	yk = (yk + 1) % my;

	system("clear");
	x = abs((xj + (mx - xk))/2);
	y = abs((yj + (my - yk))/2);
	print_there(1, 1, "--------------------------------------------------------------------------------");
	print_there(24, 1, "--------------------------------------------------------------------------------");
	print_there(y, x, "X");
	usleep(250000);
    }
return 0;
}