#include <Stdio.h>

// void sayHello(); // function prototype/decleration
// int sum(int n1, int n2);
char getChar();
//* Main function
int main()
{
    // Function is building blocks of program which is used to make our program clean and make code reuseable
    // sayHello();
    // sayHello();
    // sayHello();
    // sayHello();
    // sayHello();
    // sayHello();

    // int val1 = sum(3, 5); // function call with arguments
    // printf("%d", val1);
    // int val2 = sum(56, 65); // function call with arguments
    // printf("%d", val2);

    char letter = getChar();
    printf("%c", letter);

    return 0;
}

//* User Define Function
char getChar()
{
    return 'c';
}
// int sum(int n1, int n2) // function with parameters
// {
//     int result = n1 + n2;
//     return result;
// }

// void sayHello()
// { // function defination
// // void means return empty nothing to return
//     printf("hello World\n");
// }