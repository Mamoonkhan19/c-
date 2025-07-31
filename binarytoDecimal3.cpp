#include <iostream>
#include <math.h>
using namespace std;
int DecimalToBinary(int n)
{
    
    int pow = 1,ans =0;
    while (n != 0)
    {
      int r = n%2;
      n = n/2;

      ans += ( r*pow);
      pow *= 10;
      
    }
    return ans;
}

int BinaryToDecimal(int number)
{
    int ans = 0,pows =1,base =2;
    while (number > 0)
    {
        int reminder = number%2;
        number = number /10;
        ans += pows*reminder; 
        pows *= 2;
    }
    
    return ans;
}

bool isPower(int n) 
{
    int pow = 2;
    if (pow == 1 || n == 1)
    {
        cout<<"we don't accept this mf\tthe value is ==== ";
        return false;
    }
    
    bool yesno = false;
    while (n>0)
    {
        /* code */
        if (n % pow == 0)
        {
           
            yesno = true;
        }
    
        n =  n/2;
    }
    return yesno;
}
int isPowerOfTwo(int n){

    if (n <= 0){

        return false;
    }
    return (n & (n - 1)) == 0;
}
int main() {
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n);
    return 0;
}

