#include <bits/stdc++.h>
#include <windows.h>


using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void square();
void squareroot();
void rootOfnNumber();
void ending();
void Options();


void Options()
{
    cout << "\n\nPlease choose your operation from the below" << endl;
    cout << "Press " << endl << endl << "1. Addition" << endl << "2. Subtraction" << endl <<"3. Multiplication" << endl << "4. Division" << endl <<"5. Square of a number"<< endl << "6. Square root of a number" << endl << "7. Root of n number"<< endl<< "8. Exit" << endl;
    cout << "Enter: ";

    int option;
    cin >> option;
    switch(option)
    {
    case 1:
        system("cls");
        addition();
        break;
    case 2:
        system("cls");
        subtraction();
        break;
    case 3:
        system("cls");
        multiplication();
        break;
    case 4:
        system("cls");
        division();
        break;
    case 5:
        system("cls");
        square();
        break;
    case 6:
        system("cls");
        squareroot();
        break;
    case 7:
        system("cls");
        rootOfnNumber();
        break;
    case 8:
        system("cls");
        ending();
        break;
    default:
        cout <<"\aWrong syntex" << endl;
        system("pause");
        system("cls");
        Options();
    }
}

void addition()
{
    cout << "\t\t\t\t\t ADDITION" <<endl;
    cout << "Press 0 to stop the loop" << endl;
    double number,sum =0;
    cout << "Please enter your numbers" << endl;
    cin >> number;
    while(number!=0)
    {
        sum+=number;
        cout << "(" << sum << ")" << " ";
        cin >> number;
    }
    cout << "The summation is " << sum << endl;
    system("pause");
    Options();
}

void subtraction()
{
      cout << "\t\t\t\t\t SUBTRACTION" <<endl;
    double firstnumber, secondnumber;
    cout << "Please enter your first number" << endl;
    cin >> firstnumber;
    cout << "Please enter your second number" << endl;
    cin >> secondnumber;

    cout << "The subtraction is " << (firstnumber-secondnumber) << endl;
    system("pause");
    Options();

}

void multiplication()
{
      cout << "\t\t\t\t\t MULTIPLICATION" <<endl;
    double number, result=1;
    cout << "Please enter your numbers" << endl;
    cin >> number;
    while(number!=0)
    {
        result*=number;
        cout << "(" << result << ")" << " ";
        cin >> number;
    }
    cout << "The multiplication of the given numbers is " << result << endl;
    system("pause");
    Options();
}

void division()
{
      cout << "\t\t\t\t\t DIVISION" <<endl;
    double firstnumber, secondnumber;
    cout << "Please enter your first number" << endl;
    cin >> firstnumber;
    cout << "Please enter your second number" << endl;
    cin >> secondnumber;

    cout << "The division is " << (firstnumber/secondnumber) << endl;

    system("pause");
    Options();
}

void square()
{
      cout << "\t\t\t\t\t POWER OF A NUMBER" <<endl;
    double firstnumber, secondnumber;
    cout << "Please enter the base number to square" << " ";
    cin >> firstnumber;
    cout << "Please enter the exponent number " ;
    cin >> secondnumber;
    cout << "\nThe result of " << firstnumber << "^" << secondnumber << " is "<< pow(firstnumber,secondnumber) << endl;
    system("pause");
    Options();
}

void squareroot()
{
      cout << "\t\t\t\t\t SQUARE ROOT OF A NUMBER" <<endl;
    double number;
    cout << "Please enter a number to square root" << endl;
    cin >> number;

    double result = sqrt(number);
    cout << "The square root of the given number is " << result << endl;
    system("pause");
    Options();
}

void rootOfnNumber()
{
    cout << "\t\t\t\t\t ROOT OF \'n\' NUMBER" << endl;
    cout << "Please enter the base number ";
    double base;
    cin >> base;
    cout << "Please enter the root number ";
    double exponent;
    cin >> exponent;

    double power = 1/exponent;

    cout << "\nThe result is " << pow(base, power) << endl;
    system("pause");
    Options();
}

void ending()
{
    cout << "\n\n\n\t\t\t";
     char last[] = "Thanx for using the calculator";
        for(int i=0; i<30; i++)
        {
            Sleep(50);
            cout << last[i] << " ";
        }
}
int main()
{
    system("color 0A");
    char signboard[] = "HAPPY CALCULATING";

    cout << "\t\t" ;
    for(int i=0; i<signboard[i]; i++)
    {
        Sleep(50);
        cout << signboard[i] << " ";
    }
    Options();
}
