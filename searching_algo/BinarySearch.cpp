#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n, int key){
     int start= 0;
    int end = n-1;
while (start<=end){
        int mid = start+end /2;
        if (arr[mid]==key){
            return mid;
        }else if(arr[mid]>key) {
            end = mid-1;
        }else{
            start = mid+1;
        }
    }return -1;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for( int i= 0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;
   cout << "Element found at index :"<< BinarySearch(arr,n,key)<< endl;
    return 0;
    
}
