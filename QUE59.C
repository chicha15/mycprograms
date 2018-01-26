#include <stdio.h>
main()
{
char option;
int squarerobo();
int trianglerobo();
int circlerobo();
do{
	fflush(stdin);
	printf("square--->s\n");
	printf("triangle---->t\n");
	printf("circle---->c\n");
	printf("give your option\n");
	scanf("%c",&option);

	switch(option)
	{
		case 's':
		case 'S':
		printf("square\n");
		squarerobo();
			break;
		case 't':
		case 'T':
			printf("triangle\n");
			trianglerobo();
				break;
			case 'c':
			case 'C':
			printf("circle\n");
			circlerobo();
				break;
			case 'q':
			case 'Q':
				printf("quit");
	}
}while((option!='Q')&&(option!='q'));
}

int squarerobo()
{
	int l,b;
	float area;
	printf("give length\n");
	scanf("%d",&l);
	/*printf("give breath\n");
	scanf("%d",&b);*/
	area=l*l;
	printf("%f\n",area);
}
int trianglerobo()
{
	int base,h;
	float area;
	printf("give base\n");
	scanf("%d",&base);
	printf("give height\n");
	scanf("%d",&h);
	area=1.0/2*base*h;
	printf("%f\n",area);
}
int circlerobo()
{
	int rad;
	float area;
	printf("give the radius\n");
	scanf("%d",&rad);
	area=22.0/7*rad*rad;
	printf("%f\n",area);
}