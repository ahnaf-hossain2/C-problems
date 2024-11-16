#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n, first=0, second=1, fibo;

    cout<<"Enter a Integer : ";
    cin>>n;
    cout<<"Fibonacci Series: ";

    for(int count=0; count<n; count++)
    {
    if (count<=1)
	{
		fibo=count;
		cout<<fibo<<" ";
	}
	else {
		fibo=first+second;
		cout<<fibo<<" ";
		first=second;
		second=fibo;
	}
    }

}

// Easy way and more readable ------------------------------------------------------

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, first = 0, second = 1, count = 1, fibo;

    cout << "Enter an integer: ";
    cin >> n;
    cout << "Fibonacci Series: ";

   
    if (n >= 1) cout << first << " ";
    if (n >= 2) cout << second << " ";

    for (count = 3; count <= n; count++) {
        fibo = first + second;
        cout << fibo << " ";
        first = second;
        second = fibo;
    }

    cout << endl;
    return 0;
}
