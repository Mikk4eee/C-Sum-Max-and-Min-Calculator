/*
    Creator: Mikk4eee
    Github: https://github.com/Mikk4eee/
    C Sum Max and Min Calculator
*/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2,nummax,nummin;
    cout << "First Number:" << endl;
    cin>>num1;
    cout << "Second number:" << endl;
    cin>>num2;

    if (num1>num2) {
        nummax = num1;
        nummin = num2;
    } else {
        nummax = num2;
        nummin = num1;
    }



    cout<<"Sum: "<<num1+num2<<endl;
    cout<<"Major Number: "<<nummax<<endl;
    cout<<"Minor Number: "<<nummin<<endl;
    return 0;
}
