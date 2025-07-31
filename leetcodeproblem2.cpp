#include <iostream>
#include <vector>
#include <istream>
using namespace std;
vector <int> exeptforindexproductofall(vector<int> &nums){
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
    return ans;
}
vector <int> optimize(vector<int>&nums){
    int n = nums.size();
    vector <int> ans(n,1);
    int prefix = 1;
    int suffix = 1;
    for (int i = 1; i < n; i++) {
        prefix *= nums[i-1];
        ans[i] *= prefix;
    }
    for (int i = n-2; i>=0 ; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}
int main(){
    vector <int> nums ={1,2,3,4};
    vector <int> vec = optimize(nums);
    for(int i : vec){
        cout<<i;
    }
}
