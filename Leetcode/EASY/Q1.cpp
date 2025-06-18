#include<iostream>
#include<vector>
using namespace std;

bool canMakeEqual(vector<int>& nums, int k);

int main() {
    int k;
    cin>>k;
    vector<int> arr = {-1, -1, -1, 1, 1, 1};
    int check = canMakeEqual(arr, k);

    for (int x : arr) cout << x << " ";
    
    if(check) {
        cout<<"true\n";
    }else cout<<"false\n";
    return 0;
}

// bool canMakeEqual(vector<int>& nums, int k) {
//     int count = 0;
//     for(int i =0; i<nums.size()-1; i++) {
//         if(nums[i]<0) {
//             nums[i]*=-1;
//             nums[i+1]*=-1;
//             count++;
//         }
//         if(k==count+2) break;
//     }
//     for(int i =0; i<nums.size()-1; i++) {
//         if(nums[i]<0) canMakeEqual(nums, k);
//     }

//     if(count<=k) return true;
//     else return false;
// }

bool canMakeEqual(vector<int>& nums, int k) {
    int n = nums.size();
    int operations = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] == -1) {
            nums[i] *= -1;
            nums[i + 1] *= -1;
            operations++;
        }
    }
    bool allequal = true;
    for (int i = 0; i < n; ++i) {
        if (nums[i] != 1) allequal = false;
    }

    return allequal && operations <= k;
}
