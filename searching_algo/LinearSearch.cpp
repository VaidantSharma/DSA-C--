#include <iostream>
using namespace std;

int main() {
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
    for (int i= 0 ; i<n; i++){
        if (arr[i]==key){
            cout << "Element found at index: " << i;
            return 0;
        }
    }
    
}