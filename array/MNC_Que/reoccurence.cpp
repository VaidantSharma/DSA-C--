// Given an arr[] of size N. The task is to find repeating element in the array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.
#include <iostream>
using namespace std;
 int main (){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    // int a =0;
    // bool found;
    // while(a<n){
    //     for ( int i = 0; i<n ; i++){                                                   time Complexity O(n^2)
    //         if (arr[i] == arr[a] && i!=a){
    //         cout<< "The index of first occurence is: " << a << endl;
    //         found = true;
    //          break;
    //          }        
    //     }
    //     if (found){
    //     break;
    //     }
    // a++;
    // }                           
    int minIndex = INT32_MAX;
    const int N = 1e6;
    int idx[N];
    for (int i = 0; i<N; i++){
        idx[i] = -1;                                                 //time Complexity O(n)
    }
    for (int i =0 ; i <n ; i++){
        if (idx[arr[i]] != -1){
            minIndex = min(minIndex, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }
    if (minIndex == INT32_MAX){
        cout << -1 << endl;
    }else{
        cout << minIndex << endl;
    }
    return 0;    
 }