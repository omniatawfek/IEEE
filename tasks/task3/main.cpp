#include <iostream>
using namespace std;

int reverseNumber(long long num) {
    long long rev =0;
    while(num != 0)
    {
        long long digit =num% 10;
        rev = (rev * 10 )+ digit ;
        num /=10;
    }
    return rev;
}
int main()
{

long long num;
    cout << "Enter A Number:" << endl;
    cin>> num;
   long long reversedNumber = reverseNumber(num);
   cout<<reversedNumber;
    return 0;
}
