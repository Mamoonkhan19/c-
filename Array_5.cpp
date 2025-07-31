#include <iostream>
#include <vector>
using namespace std;

int FindForSingleNumber(vector <int> &nums)
{
    int ans =0;
    for(int value:nums)
    {
        ans ^= value;
    }
    return ans;
}

int main()
{
    // vector <char> charicter;
    // charicter.push_back('h');
    // cout<<charicter[0];
    // vector <int> value;
    vector <int> value = {1,2,3,1,2,3,5};
    cout<<FindForSingleNumber(value);


    

    return 0;
}