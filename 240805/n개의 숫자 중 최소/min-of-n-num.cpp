#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[100];
    int n;
    int min;
    int cnt = 1;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    min = arr[0];
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];

            if(arr[i] == min){
                cnt++;
            }
        }
    }

    cout << min << " " << cnt;
    return 0;
}