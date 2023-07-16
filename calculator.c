#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//c program to create a simple calculator.
void main(){
    int n,n1[30],opt;
    char ch;
    float res;
   do{
    printf("\t\tCALCULATOR\t\t\n");
    printf("choose the operation:\n");
    printf("OPERATIONS \t\t\n");
    printf("\n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION \n5.SQUARE ROOT \n6.SQUARE \n7.EXIT\n");
    scanf("\n%d",&opt);
    switch(opt){
        case 1: printf("\nyou chose addition\n");
             printf("enter the numnber limit:");
             scanf("%d",&n);
              printf("enter the numbers:\n");
             for(int i=1;i<=n;i++){
             scanf("\n%d",&n1[i]);
             }
                res=0;
               for(int i=n1[1];i<=n1[n];i++){
                res=res+i;
               }
               printf("\nthe sum is %f",res);
               break;
        case 2: printf("you chose subtraction\n");
                int n2,n3;
                printf("enter the first number:");
                scanf("%d",&n2);
                printf("enter the second number:");
                scanf("%d",&n3);
                res=n2-n3;
                printf("the answer is %f",res);
                break;
        case 3: printf("you chose multiplication\n");
                printf("enter the limit:");
                scanf("%d",&n);
                printf("enter the numbers:");
                for(int i=1;i<=n;i++){
                    scanf("%d",&n1[i]);
                }
                res=1;
                for(int i=n1[1];i<=n1[n];i++){
                    res=res*i;
                }
                printf("the answer is %f",res);
                break;
        case 4: printf("you chose division\n");
                float n4,n5;
                printf("enter the first number:\n");
                scanf("%f",&n4);
                printf("enter the second number:\n");
                scanf("%f",&n5);
                res = n4 / n5;
                printf("the answer is %f",res);
                break;
        case 5: printf("you chose square root\n");
                int n6;
                printf("enter ther number:");
                scanf("%d",&n6);
                res=sqrt(n6);
                printf("the square root of number is %f",res);
                break;
        case 6:printf("you chose square\n");
               int n7;
               printf("enter the number to find square:");
               scanf("%d",&n7);
               res=n7*n7;
              printf("the square of the number is %f",res);
              break;
        case 7:printf("you chose to exit\n");
                exit(0);
                break;
        default:printf("\nINVALID OPERATION\n");
                break;
    }
    printf("\ndo you want to continue?(y,n)");
    scanf("%c",&ch);
    scanf("%c",&ch);
   }while(ch=='y');
}
