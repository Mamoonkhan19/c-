#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <int> nums ={1,2,3,4};
    int n =5;
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
    for (int i = 0; i < n; i++) {
        if(n % i*i != 0){
            cout<<i;
        }
    
    }
    return 0;
}