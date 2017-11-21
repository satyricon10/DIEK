#include <stdio.h>
#include <stdlib.h>
main ()
{
int x,y,z,e,max;
printf("Dose 1i timi proiontos\n");
scanf("%d",&x);
printf("Dose 2i timi proiontos\n");
scanf("%d",&y);
printf("Dose 3i timi proiontos\n");
scanf("%d",&z);
printf("Dose 4i timi proiontos\n");
scanf("%d",&e);
if (x>=y && x>=z && x>=e )
{
printf("emfanise %d\n",x);
}
else if(y>=x && y>=z && y>=e)
{
printf("emfanise %d\n",y);
}
else if(z>=x && z>=y && z>=e)
{
	printf("Emfanise %d\n",z);
}
else(e>=x && e>=y && e>=z);

{
	printf("Emfanise %d\n",e);
}
system("pause");
}
