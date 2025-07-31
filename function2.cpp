#include <cmath>
#include <iostream>
#include <iomanip> // Required for setprecision
#include <iostream>
using namespace std;

#include <math.h>

int helloworld(int a,int b)
{
    return a+b;
}
int SumToN(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}
int FactorialOfN(int n)
{
    int F=1;
    for (int i = 1; i <= n; i++)
    {
        F*=i;
        /* code */
    }
    return F;
}
void SumOfDigit(int count){

    int number = 0;
        int current;
        // int lastnumber;
        // for (int i = count; i > 0 ; i--)
        // {
        //     if (i!=0)
        //     {
        //         current = count %10;
        //         count  = (count/10);
        //         number += current;   
        //         /* code */
        //     }
        //     else{
        //         break;
        //     }
        // }
        while (count>0)
        { 
            current = count %10;
            count  = (count/10);
            number += current; 

        }
        
        cout<<number;
    
}

int BinomialFactorial(int n ,int r){

    int FacN = FactorialOfN(n);
    int FacR = FactorialOfN(r);
    int FacNmR = FactorialOfN(n-r);
     
    return FacN/(FacR * FacNmR);
}

void Prime(int n){
    // like when give n=5 it will go from 2 to five and will find the primes

    for (int i = 2; i <= n; i++) {  // i will be tested for prime
        bool isPrime = true;

        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    
}




int Fabonanci(int n) 
{

    int sum = (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
    std::cout << "the sum is " <<sum<< std::endl;
}

int main() {
  int n;
  std::cout << "Enter the value of n: ";
  std::cin >> n;

  Fabonanci(n);
 
  return 0;
}