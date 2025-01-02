#include <bits/stdc++.h>
using namespace std;

int timeToEat(int arr[],int n, int m){
    int total_time=0;
    for(int i=0;i<n;i++){
        total_time+=ceil(arr[i]* 1.0/m);
    }
    return total_time;
}

class solution{
public:
    int minimumBananas(int arr[], int n, int h)
    {
        int low=1;
        int high=*max_element(arr,arr+n);
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(timeToEat(arr,n,mid)<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};