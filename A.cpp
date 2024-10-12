#include<iostream>
using namespace std;

int main() {
    int arr[] = {3,4,5,6,9,23};
    int key = 23;
    int n = 6;

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            cout<< i <<endl;
            
        }
    }
 

    return 0;
}