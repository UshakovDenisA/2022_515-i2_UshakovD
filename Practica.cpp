#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
	double x1, y1;
	int e1, e2; 
	int x, y;
	int rot;
    
	printf("Koordinati x:  \n>>");
	scanf("%e", &x);
	printf("Koordinati y:  \n>>");
	scanf("%e", &y);
	printf("Ugol povorota v gradusah : \n>>");  
	scanf("%e", &rot);
	printf("Tochka otnositelno cotoroi provoditsya povorot po x : \n>>");  
	scanf("%e", &e1);
	printf("Tochka otnositelno cotoroi provoditsya povorot po y: \n>>");  
	scanf("%e", &e2);
	x = x - e1;  
	y = y - e2;
	double phi = rot * 3.14/180;
    x1 =  ( x * cos(phi) - y * sin(phi));
    y1 =  ( x * sin(phi) + y * cos(phi));
    x = x1 + e1;
    y = y1 + e2;
    printf("= %.2e : %.2e", x, y);        
    return 0;

}
