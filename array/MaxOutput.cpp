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
    cout<<endl;
    int min = -1999999;
    for (int i =0; i<n; i++){
        min= max(min,arr[i]);
        cout << min << endl;
    }

}