#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int arr[100];
    int n;
    int min = INT_MAX;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(min > arr[i]){
            min = arr[i];

            if(i = arr[i]){
                cnt++;
            }
        }
    }

    cout << min << " " << cnt;
    return 0;
}