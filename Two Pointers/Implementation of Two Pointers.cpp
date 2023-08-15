#include<bits/stdc++.h>
using namespace std;

bool twopointers(int arr[], int N, int final){
    int left = 0;  //starting pointer
    int right = N-1;  //ending pointer
    
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum < final){  //final is the target
            left ++;
        }
        else if(sum == final){
            
            cout<<arr[left]<<" "<<arr[right]<<endl;
            return true;
        }
        else {
            right--;
        }
        
    }
    return false;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int value = 9;
    bool result = twopointers(arr,n,value);
    cout<<result;   //if the output is 1 , then there exists a pair else 0
    return 0;
}





//example
A[] = {10, 20, 35, 50, 75, 80}
X = =70
i = 0
j = 5

A[i] + A[j] = 10 + 80 = 90
Since A[i] + A[j] > X, j--
i = 0
j = 4

A[i] + A[j] = 10 + 75 = 85
Since A[i] + A[j] > X, j--
i = 0
j = 3

A[i] + A[j] = 10 + 50 = 60
Since A[i] + A[j] < X, i++
i = 1
j = 3
m
A[i] + A[j] = 20 + 50 = 70
Thus this signifies that Pair is Found.
