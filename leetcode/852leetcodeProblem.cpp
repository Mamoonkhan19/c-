#include <iostream>
#include <vector>
using namespace std;
int peakelementofarrayMIne(vector<int>&arr){
        int n = arr.size()-1;
    int st = 0;
    int peakE=0;
    while(st <= n){
            int mid = st + (n-st)/2;
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid -1]){
                peakE = mid;
                break;
            }
            else if((arr[mid] > arr[mid-1])){//search in the we are in increasing order
                st = mid;
            }
            else{// we arae in decreasing order arr[mid] < [mid -1] 7 < 8 //decreasing 
                n = mid;
            }
        }
        return peakE;
}
int main(){
    vector <int> arr1 = {0,1,0};
    vector <int> arr2 ={0,2,1,0};
    vector <int> arr3 = {0,10,5,2};
    cout<<peakelementofarrayMIne(arr1);
    cout<<endl;
    cout<<peakelementofarrayMIne(arr2);
    cout<<endl;
    cout<<peakelementofarrayMIne(arr3);
    cout<<endl;

    return 0;
}