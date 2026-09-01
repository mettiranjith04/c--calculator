#include<stdio.h>
int main(){
    int choice;
    float num1,num2,result;

    do
    {
    printf("====CALUCULATOR====\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.Divison\n");
    printf("5.exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);

    if(choice==5){
        printf("thank you for using the calculator!\n");
          break;
    }
    switch(choice){
        case 1:
        //addition
        result = num1+num2;
        printf("result = %.2f\n",result);
        break;

        case 2:
        //subtraction
        result = num1-num2;
        printf("result = %.2f\n",result);
        break;

        case 3:
        //multiplication
        result = num1*num2;
        printf("result = %.2f\n",result);
        break;

        case 4:
        //division
        if(num2!=0){
        result = num1/num2;
        printf("result = %.2f\n",result);
        }
        else
        {
            printf("cannot divide by zero\n");
        }
        break;

        default:
        printf("invalidchoice/n");
    }
    }while(choice!=5);
    return 0;
}