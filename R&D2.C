#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
void main()
{
	int x1,x2,x3,y1,y2,y3,g;
	float a,b,c;
	printf("enter coordinates\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	printf("coordinates are (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
	a=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	if((a+b)>c||(b+c)>a||(a+c)>b)
	{
		printf("points make a triangle\n");
		if(a==b&&b==c)
		{
			printf("it is an equilateral triangle");
			return;
		}
		if((a!=b)&&(b!=c)&&(c!=a))
		{
			if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
			printf("it is right angled triangle");
			else
			printf("it is scalene triangle");
			return;
		}
		if(a==b||b==c||c==a)
		{
			if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
			printf("it is right angled isosceles triangle");
			else
			printf("it is isosceles triangle");
			return;
		}
	}
}

