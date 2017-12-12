#include <stdio.h>
int main()
{
  char choice;  
  puts("1 - Nero");
  puts("2 - Soda");
  puts("3 - Krasi");
  puts("4 - Mpyra");
  printf("Your choice:");
  scanf("%c",&choice);
  printf("You've chosen ");
  switch(choice)
  {
    case '1':
      printf("Nero, ");
      break;
    case '2':
      printf("Soda, ");
      break;
    case '3':
      printf("Krasi, ");
      break;
	case '4':
      printf("Mpyra, ");   
	  break; 
    default:
      printf("as sth to drink\n");
  }
  return(0);
}
