#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
 int random, guess;
 int nog=0;
 srand(time(NULL));
   
   printf("Welcome To Guess My Number Game~\n\n\n");
   random=rand() % 100 +1; 
   
   do{
       printf("\nPlease enter your Guess(1-100)\t");
       scanf("%d",&guess);
       nog++;
       
       if(guess<random){
           
           printf("Guess larger number\t");
       }
       else if(guess>random){
           
           printf("Guess smaller number\t");
       }
       
       else {
           printf("CONGRATULATIONS !!!!! You have gussed the number in %d attempt!!!!!!!!\n\n\n",nog);
       }
       
   }while(guess!=random);
   
   
   
   printf("Thank you for playing~ \n");
   printf("Developed by gauri");
   
   
   
    return 0;
}