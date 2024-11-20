#include<iostream>
using namespace std;

void SlectionSort(int arr[],int n){
    for (int i = 0; i<n-1; i++){
        for (int j= i+1 ; j <n; j++){
            if (arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
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
    SlectionSort(arr,n);
    cout << "Sorted array: ";
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;   
}