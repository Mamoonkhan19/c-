#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int PrintNum(int i,int n){
    if(i>n){
        return 0;
    }
    PrintNum(i+1,n);
    cout<<" == "<<i<<endl;
    return -1;
}
int sum =0;
int SumOfarray(int arr[],int n,int i){
    if(i>n){
        return 0;
    }
    
    sum=sum+arr[i];
    SumOfarray(arr,n,i+1);
    return sum;
}
int DecimalToBinary(int n)
{
    
    int pow = 1,ans =0;
    while (n != 0)
    {
      int r = n%2;
      n = n/2;

      ans += ( r*pow);
      pow *= 10;
      
    }
    return ans;
}
int Power(int x,int n){
    int ans =1;
    int binary= DecimalToBinary(n);
    while(binary>0){
        if(binary%2 == 1){
            ans *= x;
        }
        x *= x;
        binary/=10;
    }
    return ans;

}
double myPow(double x, int n) {
    double ans =1;
    int  binary= n;
    if(n<0){
        x = 1/x;
        binary = -binary;
    }
    while(binary>0){
        if(binary%2 == 1){
            ans *= x;
        }
        x *= x;
        binary/=2;
    }
    return ans;
       
    }
int bestDaytosell1(vector <int> arr){
    int bestbuy = arr[0];
    int maxprofit = 0;
    for (int live = 1; live < arr.size(); live++) {
        if(arr[live]>bestbuy){
            maxprofit = max(maxprofit,arr[live]-bestbuy);
        }
        bestbuy = min(bestbuy,arr[live]);
        
     
    }

    return maxprofit;
    return -1;
}
int updatedbestDaysell1(vector <int> arr){
    int minumsofor = arr[0];
    int profit = 0;
    for (int i = 0; i < arr.size(); i++) {
        minumsofor = min(minumsofor,arr[i]);
        int maxprofit = arr[i] - minumsofor;
        profit = max(profit,maxprofit);
    }
    return profit;
}
    int main(){
    vector <int> arr = {7,1,5,3,6,4};
    double x = 2;
    int n = -3;
    double ans =1;
    if(n<0){
        x=1/x;
        n = -n;
    }
    while(n>0){
        if(n%2 == 1){
            ans *= x;
        }
        x*=x;
        n/=2;
    }
    cout<<ans;
    return 0;
}