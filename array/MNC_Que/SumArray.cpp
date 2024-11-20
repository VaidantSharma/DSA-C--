//You are given an int array of size N. you have to find a continuous subarray with the sum equal to a given number S

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int s;
    cout << "Enter the sum: ";
    cin >> s;
    int sum = 0;
    int start = -1;
    int end = -1;
    int i =0, j = 0;
    while (j<n && sum + arr[j] <= s){
        sum += arr[j];
        j++;
    }
    if (sum == s){
        cout << i+1 << " " << j << endl;
        return 0;
    }

    while (j<n){
        sum += arr[j];
        while (sum >s){
            sum -= arr[i];
            i++;
        }
        if (sum == s){
            start = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout << start << " " << end << endl;

}