#include <stdio.h>
int global;
main()
{
	void robo1();
	void robo2();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
		global=100;
		printf("%d\n",global);
		robo1();
		printf("%d\n",global);
		robo2();
		printf("%d\n",global);
}
void robo1()
{
	printf("%d\n",global);
	global=1000;
}
void robo2()
{
	printf("%d\n",global);
	global=0;
}
