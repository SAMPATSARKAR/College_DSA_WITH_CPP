#include<bits/stdc++.h>
using namespace std;
void maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum =0,start=0,tempStart=0,end=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxSum){
                maxSum=sum;
                // start=tempStart;
                end=i;
            }
            if(sum < 0){
                sum=0;
                tempStart=i+1;
            }
        }
        cout<<"Max sum"<<maxSum<<endl;
        cout<<"Start"<<start<<endl;
        cout<<"End"<<end<<endl;
      
    };

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    maxSubArray(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}
