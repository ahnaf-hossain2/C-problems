/*
Calculate the Factorial of a number.
Sample Output:
Your input to calculate factorial: 5
Factorial of 5 is 120
*/

#include<iostream>
using namespace std;

int main()
{
    int i, n, fact=1; //if multiplied by zero then return will be zero so fact = 1

    cout<<"Enter a number : ";
    cin>>n;
    for (i=1; i<=n; i++) { //if multiplied by zero then return will be zero so fact = 1
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}
