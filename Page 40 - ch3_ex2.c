#include <stdio.h> //Tells the preprocessor to include <stdio.h>
int main(void) //It has a void means that the main does not receive any information and also indicates that the function main returns an integer value
{
    int i; //This declaration specify i is of type of integer
    float x; //This declaration specify x is of type of float

    i = 40; //The integer variable i is used to store the value of 40
    x = 839.21f; //The float variable x is used to store the value of 839.21 and adding an f suffix to make it a single precision

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); //Printing the values of i. The | is used to show how much space each number occupies when printed
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); //Printing the values of x. The | is used to show how much space each number occupies when printed

    return 0; //indicating that the implementation of the program is already accomplish and that we terminate the main function with this
}