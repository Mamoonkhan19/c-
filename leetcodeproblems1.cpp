//binary search
#include <iostream>
#include <vector>
#include <algorithm>

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
        
        else if(arr[st]<=arr[mid]){
            if(arr[st] <= t&& t<=arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else// right sorted
        {   
          if(arr[mid] >= t && t<=arr[end]){ //tt
            st = mid+1;//0
          }else{
            end = mid-1;
          }
        }
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
            else{// we arae in decreasing order arr[mid] < [mid -1] 8>7 //decreasing rawan eo alka was ba mong n ko mid
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

bool student(vector <int> &books,int n,int k,int maxAllowedpages){
    int student = 1;
    int pages   = 0;
    for (int i = 0; i < n; i++) {
        if(pages + books[i] > maxAllowedpages){
            student ++;
            pages = books[i];
        }
        else
        {
            pages+=books[i];
        }
    }
    return student > k ?false:true;
}
int allocatemaxpages(vector <int> &books,int k){
     // k  number of student da
     // books che da book da
    if(k > books.size()){
        return false;
    }
    int sum = 0;
    for (int i = 0; i < books.size(); i++) {
        sum+=books[i];
    }
    int maxs = sum;
    int mins  = 0;
    int ans = 0;

    while (mins<=maxs)
    {
        int mid = mins +(maxs-mins)/2;
        cout<<mid<<endl;
        if(student(books,books.size(),k,mid))
        {
            
            ans = mid;
            maxs = mid -1;
        }
        else
        {
            mins = mid+1;
        }
    }
    
    return ans;
}

// painter partion problem is about to find the min time each painter get for a block 
bool canPaint(vector <int> block,int k,int allowedTime){
    int paitners = 1;
    int time = 0;
    for(int i =0;i<block.size();i++){
        if(time + block[i] > allowedTime)
        {
            paitners++;
            time = block[i];
        }
        else{
            time+=block[i];
        }
    }
    return paitners > k?false:true;
}

int minTime(vector<int> block,int painter){
    int sum = 0;
    int ans = 0;
    if(painter > block.size()){
        return false;
    }
    for(int i = 0 ; i<block.size();i++){
        sum += block[i];
    }
    
    int max = sum;
    int min = 0;
    while(min<=max){
        int mid = min +(max-min)/2;
        if(canPaint(block,painter,mid)){
            ans = mid;
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }

    }
    return ans;

}

// finding the minum distance in the maximum of the cow stall that the cow will far away from each other so that they don't fight
bool isCow(vector <int> stall,int cow,int allowedmidistance){// this is to find that in how many distance the cow will not fight 
    int cows = 1; // we will place the first cow on first distance;
    int stalldistace = stall[0];//from start we will place the first cow
    for(int i =1;i<stall.size();i++){// now we will go from the starting distance to the ending to find the valid anser for the stall to place the cow that they don't fight
        if(stall[i] - stalldistace >= allowedmidistance)//the condition will find teh distance is greater or equal to allowed distance if it is so then we will place the cow becase they will not fight at this distance
        {
            cows++;
            stalldistace = stall[i];
        }
    }
    return cows<=cow;//now we will se that the cows which we place in the feild are greater than the actual cow so then we will return false becase the allowed distance is larger we need low distance
}

int StallCowSoNotFight(vector <int> &stall ,int cow){
    sort(stall.begin(), stall.end());// we will also sort the array to find the anser in the beter way
    //it will give us the min distance between the stall to place the cow that they don't fight
    int low = stall[0];
    int n = stall.size();
    int high =stall[n-1]-stall[0];
    int ans = 0;
    while (low <= high)
    {
        int mid = low+(high - low)/2;
        // now we will find that where to go left or right
        if(isCow(stall,cow,mid))// if we find the min possible value then we will go to right to find the max distance value
        {
            ans = mid;
            low = mid+1;
        }
        else//if we don't find the min possible value then we will go to the higher allowed distance 
        {
            high = mid -1;
        }
    }
    return ans;
}
int main() {

    return 0;
}