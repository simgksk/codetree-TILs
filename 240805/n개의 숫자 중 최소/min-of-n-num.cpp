#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[10];
    int n;
    int min = 9999;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];

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