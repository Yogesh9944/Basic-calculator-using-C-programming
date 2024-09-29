#include<stdio.h>
int main(){
    char operator;
    double number1,number2,result;
    printf("welcome, This is a basic calculator created by me using C programming language!\n");
    printf("enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter two numbers:");
    scanf("%lf %lf",&number1,&number2);

    switch(operator){
        case '+':
        result=number1+number2;
        printf("result:%.2lf+%.2lf=%.2lf\n",number1,number2,result);
        break;
        
        case '-':
        result=number1-number2;
        printf("result:%.2lf-%.2lf=%.2lf\n",number1,number2,result);
        break;

        case '*':
        result=number1*number2;
        printf("result:%.2lf*%.2lf=%.2lf\n",number1,number2,result);
        break;

        case '/':
          if (number2 != 0) {
                result = number1 / number2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", number1, number2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            default:
            printf("Invalid operator!\n");
    }
    return 0;
    }
