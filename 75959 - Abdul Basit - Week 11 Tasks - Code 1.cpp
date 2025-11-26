#include<iostream>
using namespace std;
int main()
{
    int choice;
    float a, b;

    do
    {
        cout << "menu\n";
        cout << "1. Addition\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "enter your choice ";
        cin>> choice;

        if (choice >= 1 && choice <=5)
        {
            cout << "enter first number ";
            cin>> a;
            cout << "enter second number ";
            cin>> b;
        }

        switch(choice)
        {
            case 1:
            cout << "Addition is " << a+b <<endl;
            break;

            case 2:
            cout << "Subtraction is " << a-b <<endl;
            break;

            case 3:
            cout << "Multiplication is " << a*b <<endl;
            break;

            case 4:
            cout << "Divide is " << a/b <<endl;
            break;

            case 5:
            cout << "exiting";
            break;

            default:
            cout << "invaild choice";
            break;
        }
    
    } while (choice != 5);
    
    return 0;
}