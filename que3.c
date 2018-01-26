#include<stdio.h>
 main() 
 {
   char para[100];
   int l;
   int i;
  /* char i=' ';
   char j='\n';
	char key;*/
   printf("Enter Paragraph : ");
   scanf("%[^\t]s", para);
   printf("%s",para);
   l=strlen(para);
   for(i=0;i<l;i++)
	 {
	   if(para[i]==' '||para[i]=='\0')
		   para[i]=toupper(para[i]);
	   printf("%s",para);

 /*  if(key==' '||key=='\n')
	   strupr(para[i+1]);
	strupr(para[j+1]);
	printf("required para is");
   printf("Paragraph : %s", para);*/
	 }
}