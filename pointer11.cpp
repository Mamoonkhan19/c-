#include <iostream>
#include <vector>
using namespace std;
// this one is the pointer approach like the int* a is storing the address of the value give in call stack &a;
void chagevlue(int* a){
    *a = 100;
};
// this one is using the alies & but do the same thing 
void chagevlue(int &b){
    b = 100;
}
// / @brief 
/// @return 
int main() {
    // //pointer are use to store the addres of varable
    // int a = 20;
    // int* b = &a;

    // int** c = &b; // pointer to pointer is like a normal pointer but it store the adrees of the pointer  // the address store init
    // cout<<c;
    // cout<<endl;
    // cout<<&b;    


    // derefrence operater * is use to show the value int the store address
    // int a = 92;
    // int* ptr = &a;
    // int** pptr = &ptr;
    // cout<<**pptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<**pptr;

    //NuLL pointer

    // int *ptr = NULL;
    // cout<<ptr;


    // pass by refrence
    // int a = 9;
    // cout<<a<<endl;
    // chagevlue(a);
    // cout<<a<<endl;
    
    // array pointer so the arr[] arr -> is a uniqe varible which stroe the address of the first value in the array also the array pointer are constant pointer's we can't change that

    int arr[2] = {1,2};
    int* ptr;//100
    int* ptr2 = ptr;
    if(ptr == ptr2){
        cout<<"yes";
    }
    return 0;
}
