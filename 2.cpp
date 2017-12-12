#include <stdio.h>
#include <stdlib.h>
main()
{
int a,b;
printf("Gief 2 Numbers\n");
scanf("%d %d",&a,&b);
((a>10 && a<20)||(b>10 && b<20))?printf("%d+%d=%d\n",a,b,a+b):printf("Out of range.Nothing to print");
system("pause");
}
