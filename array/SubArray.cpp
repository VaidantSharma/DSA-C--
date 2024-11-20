#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";   
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for( int i= 0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"Sum of all subarrays:" ;
    int sum = 0;
    for (int i =0; i<n; i++){
        sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j]; 
            cout << sum << endl;
        }
    }
}