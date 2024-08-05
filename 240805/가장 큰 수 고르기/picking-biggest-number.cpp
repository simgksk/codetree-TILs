#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[10];
    int max = INT_MIN;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<max;

    return 0;
}