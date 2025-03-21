#include <stdio.h>
int main()
{

int n1,n2;
float result;
char ch;

 printf("Enter operation \t");
 scanf("%c",&ch);

 printf("Enter first numeber \t ");
 scanf("%d",&n1);
 
  printf("Enter second numeber \t ");
 scanf("%d",&n2);


switch(ch) {
    case '+': result = n1+n2;
    printf("%lf",result);
     break;

     case '-': result = n1-n2;
     printf("%lf",result);
     break;

     case '*': result = n1*n2;
     break;

     case '/': result = n1/n2;
     printf("%lf",result);
     break;


     case '%': result = n1%n2;
     printf("%lf",result);
     break;

     default : printf("not applicable");
}
    return 0;
}