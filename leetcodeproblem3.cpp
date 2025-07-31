#include <iostream>
#include <vector>
using namespace std;
int MaxWaterinthecontaner(vector <int> height){
    int n = height.size();
    int maxwater = 0;
    for (int i = 0; i < n; i++) {
        int ht = 0;
        int area = 0;
        int w = 0;
        for (int j =i+1; j < n; j++) {
            w = j-i;
            ht = min(height[i],height[j]);
            area = w*ht;
            maxwater = max(maxwater,area);
        }
    }
    return maxwater;

}
int MaxWatertwopointerApproach(vector <int> h){

    int n = h.size();
    int i = 0;
    int j = n-1;
    int maxwater = 0;
    while (i<j)
    {
        int width = j - i;
        int height = min(h[i],h[j]);
        int area = width * height;
        maxwater = max(maxwater,area);
        if(h[i]<h[j]){
            i++;
        }
        else{
            j--;
        }
        }
        return maxwater;
}    

int main(){
    vector <int> h = {1,8,6,2,5,4,8,3,7};
    cout<<MaxWatertwopointerApproach(h);
    return 0;
}