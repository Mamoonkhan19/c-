#include <iostream>
#include <math.h>
#include <string>
#include <strings.h>
using namespace std;

int main(int argc, const char** argv) {
   
    // marks grading 
    
    // int n;
    // cin>>n;
    // if (n >=50 && n<=60)
    // {
    //     std::cout << "you are pass" << std::endl;
    // }
    // else if(n>85 && n <= 100  )
    // {
    //     cout<<"oh ! fuck you are in A grade";
    //     /* code */
    // }
    

    // find lower case and upper case
    
    // char a = 'A';    
    // if (a >= 97 || (a <= 123 && a > 97))
    // {
    //     cout<<"it is fucking lower case\n";
    //     /* code */
    // }
    // else if (a >= 65 || a <=90)
    // {
    //     cout<<"it is fucking upper case mf\n";
    // }


    //ternay operaters
    // int a = 10;
    // a >= 1 && a<=10?cout << "hell no it is greater":cout << "fuck it is not greater" << std::endl;


    // loops
    // int a =1;
    // while (a<=10)
    // {
    //     /* code */
    //     cout<<"hello world\n";
    //     a++;
    // }

    //sum of value
    // int sum=0; 
    // for (int i = 1; i <= 3; i++)
    // {       
    //     sum+=i;
    // }
    // std::cout << sum << std::endl;
    
    // sum of odd numbers only
    // int sum = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum+=i;
    //     }
        
    // }
    // std::cout << sum << std::endl;


    prime or not
    int n;
    bool yes = true;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            std::cout << "it is not a prime" << std::endl;
            yes = false;
            break;
        }
        
    }
    if(yes)
    {
        yes = true;
        std::cout << "it is a prime" << std::endl;
    // }        
    
    
    
    return 0;
}