#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void printVector(vector<int> nums)
{
    for(int Value:nums)
    {
        cout<<Value;
    }
    cout<<endl;
}
vector<int> PairSum(vector <int> nums,int T)
{
    vector <int> vec;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++) {
            if (nums[i] + nums[j] == T)
            {
                vec.push_back(nums[i]);
                vec.push_back(nums[j]);
                return vec;
            }
            
        }
    }
    return vec;

}
vector<int> PairSumOptimize(vector<int> nums,int T)
{
    int end = nums.size();
    int st =0;
    int C = 0;
    vector <int> TempVEc;
    
    while (st<end)
    {
        C = nums[st]+nums[end];
        if (C>T)
        {
            end--;
        }
        if (C<T)
        {
            st++;
        }
        if(C == T)
        {
            TempVEc.push_back(nums[st]);
            TempVEc.push_back(nums[end]);
            break;
        }
    }
    return TempVEc;
}
int majorityElementforeach(vector<int>& nums) 
    {
        int n = nums.size();
        for(int val: nums)
        {
            int freq = 0;
            for(int el: nums)
            {
                if(el == val)
                {
                    freq++;
                }
            }
            if(freq > n/2)
            {
                return val;
            }
        }
        return -1; // یا throw exception، اگر majority element guaranteed نہ ہو
    }
int majorityelementforloop(vector<int>& LongVector)
{
    int n = LongVector.size();
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if(LongVector[j] == LongVector[i]){
                freq++;
            }}
            if(freq>n/2){
            return LongVector[i];}
        }
    return -1;
}
int majorityOptimize(vector <int> arr)
{
    sort(arr.begin(),arr.end());
    // vector <int> arr = {1,1,1,2,2,2,2,2,2};
    int freq = 1,ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i-1])
        {
            freq ++;
        }
        else if (freq>arr.size()/2)
        {
            break;
        }
        else
        {
            ans = arr[i],freq = 0;
        }
    }    
    return ans;
}
int moresAlgorithms(vector <int> arr){
    int freq =0,ans = 0;
    // if we sort the arr before the algorithm it will be also nice
    for (int i = 0; i < arr.size(); i++) {
       if (freq == 0)
       {
            ans = arr[i];
        }
        else if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
       
    }    
    int count = 0;
    for(int i:arr){
        if(ans == i){
            count++;
        }
    }
    if(count>arr.size()/2){return ans;}
    return -1;
}

int main()
{
    vector <int> nums ={1,2,3,4};
    int n = nums.size();
    vector <int> ans(n,1);
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for (int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    for (int i = 0; i < n; i++) {
        ans[i] = suffix[i] * prefix[i];
    }
    printVector(ans);
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int p =1;
    //     for (int j = 0; j < nums.size(); j++) {
    //         if(nums[j] != nums[i]){
    //             p *=nums[j];
    //         }
    //     }
    //     ans.push_back(p) ;
    // }
    
    return 0;
}