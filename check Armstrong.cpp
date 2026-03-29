#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num, temp, sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> num;
    temp = num;
    for(int t = num; t != 0; t /= 10) digits++;
    for(temp = num; temp != 0; temp /= 10)
	{
        int d = temp % 10;
        sum += pow(d, digits);
    }
    if(sum == num) cout << "Armstrong number";
    else cout << "Not Armstrong";
    return 0;
}
