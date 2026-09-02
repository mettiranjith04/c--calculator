#include<stdio.h>
int main(){
    int option;
    float a,b,result;

    do
    {
    printf("====CALUCULATOR====\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.Divison\n");
    printf("5.exit\n");
    printf("Enter your option:");
    scanf("%d",& option);

    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);

    if(option==5){
        printf("thank you for using the calculator!\n");
          break;
    }
    switch(option){
        case 1:
        //addition
        result = a+b;
        printf("result = %.2f\n",result);
        break;

        case 2:
        //subtraction
        result = a-b;
        printf("result = %.2f\n",result);
        break;

        case 3:
        //multiplication
        result = a*b;
        printf("result = %.2f\n",result);
        break;

        case 4:
        //division
        if(b!=0){
        result = a/b;
        printf("result = %.2f\n",result);
        }
        else
        {
            printf("cannot divide by zero\n");
        }
        break;

        default:
        printf("invalidoption/n");
    }
    }while(option!=5);
    return 0;
}