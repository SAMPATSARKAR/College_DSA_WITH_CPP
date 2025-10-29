// #include<bits/stdc++.h>
// using namespace std;
// int maxSubarraySumCircular(int* nums, int numsSize) {
//     int total = 0;
//     int max_sum = nums[0], min_sum = nums[0];
//     int curr_max = 0, curr_min = 0;

//     for (int i = 0; i < numsSize; i++) {
//         total += nums[i];

//         curr_max += nums[i];
//         if (curr_max > max_sum) {
//             max_sum = curr_max;
//         }
//         if (curr_max < 0) {
//             curr_max = 0;
//         }

//         curr_min += nums[i];
//         if (curr_min < min_sum) {
//             min_sum = curr_min;
//         }
//         if (curr_min > 0) {
//             curr_min = 0;
//         }
//     }

//     if (max_sum < 0) {
//         return max_sum;
//     }

//     int wrap_sum = total - min_sum;
//     if (wrap_sum > max_sum) {
//         return wrap_sum;
//     }

//     return max_sum;
// }
// //circular array
// int kminm(int* arr,int size){
//     int minSum=INT_MAX;
//     int sum=0;
//     // int minSum;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//         if(sum<minSum){
//             minSum=sum;
//         }
//         if(sum>0){
//             sum=0;
//         }
//     }
//     return minSum;
// }
// int kmaxm(int* arr,int size){
//     int maxSum=INT_MIN;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//         if(sum>maxSum){
//             maxSum=sum;
//         }
//         if(sum<0){
//             sum=0;
//         }
//     }
//     return maxSum;
// };
// int main(){
//     int arr[4]={1,-2,3,-2};
//     int size=4;
//     cout<<kmaxm(arr,size)-kminm(arr,size)<<endl;

// }
// --------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
