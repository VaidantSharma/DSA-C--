#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n+1];
    arr[n] = -1;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    //Conditons which are given are that the number of visitors on the day should be greater than the number of visitors on the previous day and the number of visitors on the day should be greater than the number of visitors on the following day.
    //The time complexity of this code can't be greater than O(n) due to given constraints  and the space complexity of this code is O(1).
    int maximum = -1;
    
    if (n==1){
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    for ( int i =0; i<n ; i++){
        if (arr[i]>maximum && arr){
            maximum = arr[i];
            if (arr[i]>arr[i+1]){
                ans++;
            }
            maximum = max(maximum,arr[i]);  
        }
    }
    cout << "The number of record breaking days are: ";
    cout << ans << endl;

}