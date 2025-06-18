#include<iostream>
using namespace std;

int main() {
    int i;
    int temp, size=1;
    int array[i];
    for(i=0;i<4000; i++) {
        cin>> temp;
        if (char(temp) == '\n') {
            break;
        }
        else {
            array[i] = temp;
        }
        size++;
    }
    for (int i =0; i<size; i++) {
        cout<< array[i]<< " ";
    }
    return 0;
}