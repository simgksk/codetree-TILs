#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[100];
    int n;
    int min;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    min = arr[0];

    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            cnt++;
        }
    }

    cout << min << " " << cnt;
    return 0;
}