#include <stdio.h> //Tells the preprocessor to include <stdio.h>
int main (void) //It has a void means that the main does not receive any information and also indicates that the function main returns an integer value
{
    int num1, denom1, num2, denom2, result_num, result_denom; //This declaration specify num1, denom1, num2, denom2, result_num, and result_denom are of type of integer

    printf("Enter first fraction: "); //Tells the user to input the first fraction
    scanf("%d/%d", &num1, &denom1); //The %d indicates that the data should be an integer. The &num1 and &denom1 is where the computer stores the value that the user enters.

    printf("Enter second fracion: "); //Tells the user to input the second fraction
    scanf("%d/%d", &num2, &denom2);//The %d indicates that the data should be an integer. The &num2 and &denom2 is where the computer stores the value that the user enters.

    result_num = num1 * denom2 + num2 * denom1; //The integer variable result_num is used to store the result of the sum of the products of num1 and denom2, and num2 and denom1
    result_dom = denom1 * denom2 //The integer variable result_dom is used to store the result of the product of denom1 and denom2
    printf("The sum is %d/%d\n", result_num, result_denom); //It prints the values of variables result_num and result_denom

    return 0;//indicating that the implementation of the program is already accomplish and that we terminate the main function with this
}