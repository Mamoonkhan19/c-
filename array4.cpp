#include <iostream>
#include <math.h>
using namespace std;
void pirntArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
bool exist(int arr[],int n,int value)
{
    for (int i = 0; i <n; i++)
    {
        /* code */
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
    
}
void changeArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i] *= 2;
    }
    
}
void FindTheIntersectionOfArray(int arrs[],int arr[],int n)
{

    for (int i = 0; i < n;i++)
    {

            if (exist(arrs,n,arr[i]))
            {
                cout<<arr[i];
            }
    }
}
int LinerSearchArray(int arrs[],int s,int Find)

{
    
    int idx = 0;
    for (int i = 0; i < s; i++)
    {
        /* code */
        if (arrs[i] == Find)
        {
            idx = arrs[i];
        }
        
    }
   return idx-1;
}
void FindTheUniqueofArry(int arr[],int n)
{
     for (int i = 0; i < n; i++) {
        bool is_unique = true; // Assume current element is unique
        
        // Check for duplicates before the current index
        for (int j = 0; j < i; j++) {
          if (arr[i] == arr[j])
          {
             is_unique =false;
             break;
          }
        }
        // cout<<endl;
        // If no duplicates found before, check for duplicates after the current index
        if (is_unique) {
            for (int k = i + 1; k < n; k++) {
              
                if (arr[i]==arr[k])
                {
                    is_unique = false;
                }
                
            }
        }

        if (is_unique) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl; // Add a newline for better output formatting
}
int FindTheLargestValueInArray(int Num[],int size)
{
    
    double LARGESTVALUE = -9999999999;
  

    for (int i = 0; i < size; i++)
    {
        if (Num[i] > LARGESTVALUE)
        {

            LARGESTVALUE = Num[i];
        }
        
        
    }
    return LARGESTVALUE;
}
int FindTheSmalestInArray(int Num[],int size)
{
    
    double Smallest = +9999999999;
  

    for (int i = 0; i < size; i++)
    {
        if (Num[i] < Smallest)
        {

            Smallest = Num[i];
        }
        
        
    }
    return Smallest;
}
void ReverseARR(int arr[],int size)
{
    int ReverseArr[size];
    for (int i = 0; i < size ;i++)
    {
        ReverseArr[i] = arr[(size -1 )-i];
    }
    
    pirntArray(ReverseArr,size);

}

void UpdatedReverse(int arr[],int sz)
{
    int start = 0;
    sz = sz -1;
    while (start < sz)
    {
        swap(arr[start],arr[sz]);
        /* code */
        start ++;
        sz --;
    }
    
}
void SwapTheSmallestWithLargestOfArray(int arr[],int n)
{
    int L = FindTheLargestValueInArray(arr,n);
    int S = FindTheSmalestInArray(arr,n);
    int i = LinerSearchArray(arr,n,L);
    int x = LinerSearchArray(arr,n,S);
    swap(arr[i],arr[x]);
    pirntArray(arr,n);

}
void FindTheSumOfArr(int arr[],int n)
{

    int sum = 0;
    for (int i = 0; i <  3; i++)
    {
        sum+=arr[i];
    }
    std::cout <<sum << std::endl;
}

int main()
{
    int n = 7;
    int arr[n] = {1,2,4,3,5,7,6};
    int arrs[n] = {1,2,5,4,3,6,8};
    FindTheIntersectionOfArray(arrs,arr,n);

    
    return 0;
}
