//binary search
#include <iostream>
#include <vector>
using namespace std;
int binarysearchalgo(vector <int> &arr,int T){
    int n = arr.size();
    int st = 0;
    int end = n;
    while (st<=end)
    {
        int mid = (st + end)/2;
        if(arr[mid] == T){
            return mid;
        }
        else if(T>arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
// rotated sorted array 
int rotatedsorted(vector <int> &arr,int t ){
    int st = 0;//5//0
    int end = arr.size() - 1;
    while (st<=end)
    {
        int mid = st + (end - st) / 2;
        if(arr[mid] == t){
            return mid;
        }
        
        else if(arr[st]<arr[mid]){
            if(arr[st] <= t&& arr[end] - t){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else// right sorted
        {   
          if(arr[mid] <= t && arr[end]>=t){ //tt
            st = mid+1;//0
          }else{
            end = mid-1;
          }
        }
        cout<<"helo";
    }
    return -1;   
}
// ans peak ealement will never be the first and the last of the array or vector and the secound point is that the array will be like the mountaines going in the asecending order and backing in the decending order
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
                st = mid+1;
            }
            else{// we arae in decreasing order arr[mid] < [mid -1] 7 < 8 //decreasing rawan eo alka was ba mong n ko mid
                n = mid-1;
            }
        }
        return peakE;
}

// finding the single element in the array mean that every element will have pair execpt one element;
int findingsingleelementinsortedarray(vector <int> &arr){
    int st = 0;
    int n = arr.size()-1;
    int ans = 0;
    if(n == 1) return arr[0];
    while(st<=n){
        int mid = st+(n-st);
        // edge cassess handling
        if(arr[mid] == 0 && arr[0] != arr[1]) return arr[mid];
        else if(arr[mid] == arr[n-1] && arr[n] != arr[n-1]) return arr[mid];
        else if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
        // main logic
        // finding the array is even or odd
        else if(mid%2 == 0){//even
            if(arr[mid -1] == arr[mid]){
                 n = mid-1;
            }
            else
            {
                st = mid+1;
            }
        }
        else{// odd
            if(arr[mid-1] == arr[mid]){
                st = mid+1;
            }
            else{
                n = mid-1;
            }
        }
    }
    return -1;
}
int main() {
    vector <int> arr= {1,1,2,2,3,3,4,5,5};
    cout<<findingsingleelementinsortedarray(arr);
    return 0;
}