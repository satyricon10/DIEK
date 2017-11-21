#include <stdio.h>
#include <stdlib.h>
main ()
{
int a;
printf("Dose ena vathmo\n");
scanf("%d",&a);
if (a>18 && a<=20)
	{
	printf("Excellent\n");	
	}	
	
	else if(a>16 && a<=18)
	{
		
	printf("Very Good\n");	
}	
	
	else if(a>13 && a<=16)
	{
	printf("Good\n");
}
	
	else if(a>10 && a<=13)
	{
	
	printf("Dangerous Zone\n");
}
	
	else(a>0 && a<=10);
	{
	
	printf("Need Help\n");
}
return 0;
}
