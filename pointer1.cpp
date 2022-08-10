#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x = 5;
    int num1 = 10;
    int num2 = 20;


    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;


    cout<< x <<endl;
    cout<< &x <<endl;
    cout<< sum <<endl;

    getch();
}
