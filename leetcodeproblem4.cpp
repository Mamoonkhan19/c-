#include <iostream>
#include <climits>
#include <math.h>
#include <vector>
using namespace std;

void PrintSubArray(int arr[],int n)
{
    for (int str = n; str >= 0; str--)
    {
        for (int end = str; end < n; end++)
        {
            for (int i =end ; i < n; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
            
        }
        cout<<endl;
       
    }
    
    cout<<endl;
}
void MaximumOfSubArraySum(int arr[],int count)
{

    int maximum = -99999;
    for (int i = 0; i < count; i++)
    {
        int currentSum = 0;
        for (int j = i; j < count; j++)
        {
            currentSum += arr[j];
        }
        cout<<endl;
        maximum = max(currentSum,maximum);
    }
    cout<<maximum;
    cout<<endl;
}

int main()
{
    int arr[6] = {3,-5,5,4,-7,9};

    int maximum = -888888;
    int curretsum =0;
    for (int i = 0; i < 6; i++)
    {
        curretsum += arr[i];
        maximum = max(curretsum,maximum);
        if (curretsum < 0)
        {
            curretsum = 0;
        }
    
    }
    cout<<maximum;
    MaximumOfSubArraySum(arr,6);







    return 0;
}


