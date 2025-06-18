#include<iostream>
using namespace std;

void twosum(int size, int array[], int target);

int main() {
    int size, target;
    cout<<"size: \n";
    cin>>size;
    int nums[size];
    cout<<"nums =\n";
    for(int i = 0; i<size; i++) {
        cin>> nums[i];
    }
    cout<<"target =\n";
    cin>> target;
    twosum(size, nums, target);
    return 0;
}

void twosum(int size, int array[], int target) {
    for(int i=0; i<size; i++) {
        for (int j=size-1; j>i; j--) {
            if (array[i]+array[j] == target) {
                cout<<i<<" "<<j<<'\n';
                break;
            }
        }
        return;
    }
}