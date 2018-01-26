#include <stdio.h>
#define mr 20
#define mc 20
main()
{
	int a[mr][mc],b[mr][mc],c[mr][mc];
	int i,j;
	void rarray(int[][mc]);
	void parray(int[][mc]);
	void addarray(int[][mc],int[][mc],int[][mc]);
	rarray(a);
	rarray(b);
	addarray(a,b,c);
	parray(c);
}
void rarray(int x[][mc])
{
	int i,j;
	for(i=0;i<mr;i++)
		for(j=0;j<mc;j++)
		scanf("%d",&x[i][j]);
}
void addarray(int x[][mc],int y[][mc],int z[][mc])
{
	int i,j;
	for(i=0;i<mr;i++)
		for(j=0;j<mc;j++)
		z[i][j]=x[i][j]+y[i][j];
}
void parray(int z[][mc])
{
	int i,j;
	for(i=0;i<mr;i++)
		for(j=0;j<mc;j++)
		printf("%d",z[i][j]);
}

	