#include<bits/stdc++.h>
using namespace std;
// void maxSubArray(vector<int>& nums) {
//         int maxSum = INT_MIN;
//         int sum =0,start=0,end=0,tempStart=0;

//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             if(sum>maxSum){
//                 maxSum=sum;
//                 start=tempStart;
//                 end=i;
//             }
//             if(sum < 0){
//                 sum=0;
//                 tempStart=i+1;
//             }
//         }
//         cout<<"Max sum"<<maxSum<<endl;
//         cout<<"Start"<<start<<endl;
//         cout<<"End"<<end<<endl;
      
//     };
    

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     maxSubArray(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

// }
// ---------------------
int maxSubarraySumCircular(int* nums, int numsSize) {
    int total = 0;
    int max_sum = INT_MIN, min_sum = nums[0];
    int curr_max = 0, curr_min = 0;
    int start=0;
    int end=0;
    int tempStart=0;
    for (int i = 0; i < numsSize; i++) {
        total += nums[i];

        curr_max += nums[i];
        if (curr_max > max_sum) {
            max_sum = curr_max;
            start=tempStart;
            end=i;
        }
        if (curr_max < 0) {
            curr_max = 0;
            tempStart = i+1;
        }

        curr_min += nums[i];
        if (curr_min < min_sum) {
            min_sum = curr_min;
        }
        if (curr_min > 0) {
            curr_min = 0;
        }
    }
    cout<<start<<" "<<end<<endl;
    if (max_sum < 0) {
        return max_sum;
    }

    int wrap_sum = total - min_sum;
    if (wrap_sum > max_sum) {
        return wrap_sum;
    }

    return max_sum;
};
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarraySumCircular(arr,n)<<endl;
}