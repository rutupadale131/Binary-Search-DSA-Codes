#include <bits/stdc++.h>
using namespace std;

int no_of_bouquets(int arr[], int d,int k, int n){
    int count=0;
    int bouquets=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=d){
            count+=1;
            if(count==k){
                bouquets+=1;
                count=0;
            }
        }else{
            count=0;
        }
    }
    return bouquets;
}

class solution{
public:
    int bouquetFormation(int arr[], int n, int k, int m){
    int low=*min_element(arr,arr+n);
    int high=*max_element(arr,arr+n);
    int ans=high;
    while(low<=high){
        if(n<m*k){
            return -1;
        }
        int mid=(low+high)/2;
        int bouquets=no_of_bouquets(arr,mid,k,n);
        if(bouquets==m && mid<ans){
            ans= mid;
            high=mid-1;
        }else if(bouquets<m){
            low=mid+1;
        }else{
            high=mid-1;
        }
        
    }
    return ans;
        
    }
};