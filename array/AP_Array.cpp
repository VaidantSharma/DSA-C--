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
    int ans = 2;
    int previousCommonDifference = arr[1] - arr[0];
    int currentCommonDifference = 2;
    int j = 2;
    while (j<n){
        if (previousCommonDifference == arr[j]- arr[j-1]){
            currentCommonDifference++;
        }else{
            previousCommonDifference = arr[j] - arr[j-1];
            currentCommonDifference = 2;
        }
        ans = max(ans , currentCommonDifference);
        j++;
    }
    cout << ans << endl;
    return 0;
}