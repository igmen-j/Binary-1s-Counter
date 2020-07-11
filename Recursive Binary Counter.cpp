#include <iostream>

using namespace std;

int binCount(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The number of 1s in " << n << " is " << binCount(n) << endl;
}


/*
Recursively counts the number of 1s in the binary form of the number from user input
*/
int binCount(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if ((n % 2) == 1)  //number is odd
        return binCount(n / 2) + 1; //int number round down
    else   //number is even  
         return binCount(n / 2);
}