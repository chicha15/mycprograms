struct cricket
{
	char playername[50];
	char teamname[50];
	int battingavg;
};
main()
{
struct cricket player[50];
int i;
for(i=0;i<50;i++)
{
	scanf("%s",player[i].playername);
	scanf("%s",player[i].teamname);
	scanf("%d",&player[i].battingavg);
	printf("%s",player[i].playername);
	printf("%s",player[i].teamname);
	printf("%d",player[i].battingavg);
}
}
