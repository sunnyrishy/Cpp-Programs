Insertion Sort Algorithm : 


insertionSort(array)
  mark first element as sorted
  for each unsorted element X
    'extract' the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    break loop and insert X here
end insertionSort


Program ------------------------------------------------------------------------------------------------------

#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&arr){  
    int n = arr.size();                               // n stores the size of array
    for(int i=1;i<n;i++){                            // iterating from the second element to end
        int key = arr[i];                            // key stores the second element initially --  assuming the first element be sorted
        int j = i-1;                                  // j stores the first element i.e index 0
        
        while(j>=0 && arr[j]>key) {
            swap(arr[j+1],arr[j]);
            j--;
        }
    }
}

int main() {
    vector<int>arr = {5, 2, 8, 12, 1, 6, 3, 9};
    insertionsort(arr);
    cout<<"Sorted array is : ";
    for (int num : arr) {
        std::cout << num << " "; 
    }
    cout<<endl;
    return 0;
}




For user input array : ------------------

  #include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j]>key){
            swap(arr[j+1],arr[j]);
            j--;
        }
    }
}

int main() {
    int size;
    vector<int>arr;
    cout<<"Enter your array of numbers size : ";
    cin>>size;
    
    cout<<"Enter elements : ";
    for(int i =0;i<size;i++) {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    insertionsort(arr);
    cout<<"Sorted array is : ";
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
