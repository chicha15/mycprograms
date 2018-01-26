#include <stdio.h>
main()
{
	void printarray(char[5][5]);
	int isempty(char[][5],int,char);
	char v;
	char e;
		char choice;
		int row=0;
		char seat='0';
		int i,j;
		int empty=0;
		char option;
		char a[5][5]={{'1','a','b','c','d'},
			                  {'2','a','b','c','d'},
			                   {'3','a','b','c','d'},
			                   {'4','a','b','c','d'},
			                    {'5','a','b','c','d'}};
	do
	{

		printarray(a);
		isempty(a,row,seat);
		/*char v,e;
		char choice;
		int row,temp;
		char seat;
		int i,j;
		char option;*/
		printf("\n choose the type of seat vip or eco");
		printf("\n enter v  OR  e\n ");
		fflush(stdin);
		choice=getchar();
		if(choice=='e')
		{
			printf("select the row : ");
			scanf("%d",&row);
			printf("select the seat required : ");
			fflush(stdin);
			seat=getchar();
            empty=isempty(a,row,seat);
			if(empty==1)
			{
			if(seat=='a')
				a[row-1][1]='x';
			if(seat=='b')
				a[row-1][2]='x';
			if(seat=='c')
				a[row-1][3]='x';
			if(seat=='d')
				printf("You opted for Economy Seat\n");
			}
			else
				{
				printf("the seat already reserved by someone\n");
			}
		}
		if(choice=='v')
		{
			printf("select the row\n : ");
			scanf("%d",&row);
			printf("select the seat required\n : ");
			fflush(stdin);
			seat=getchar();
            empty=isempty(a,row,seat);
			if(empty==1)
			{
			if(seat=='d')
				a[row-1][4]='x';
			else
				{
				printf("your selected seat is of economic\n");
				}
			}
			else
			{
				printf("seat already reserved\n");
			}

		}
		printf("your seat is booked\n");
		printf("you want to book more seats\n");
		printf("give your option y OR n\n");
		fflush(stdin);
		option=getchar();
		/*int isempty(char[][],int,char);*/

	}
	while (option!='n');
}
		void printarray(char a[5][5])
		{
			int i,j;
			for(i=0;i<5;i++)
			{
				printf("\n");
				  for(j=0;j<5;j++)
					  printf("%c  ",a[i][j]);
			}
		}
	int isempty(char a[5][5],int row,char seat)
	{
		int temp;

			switch(seat)
		{
				case 'a':
				temp=1;
				break;
				case 'b':
				temp=2;
				break;
				case 'c':
				temp=3;
				break;
				case 'd':
				temp=4;
				break;
				default:
					temp=5;
		}
		if(a[row-1][temp]=='x'||temp==5)
			return 0;
		else
			return 1;
	}
