#include <iostream>
using namespace std;

int main()
{
    int n,x;
    int arr[10000];
    int seen[10000];
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (seen[arr[i]]==0)
        {
            seen[arr[i]] = 1;
        } else 
        {
                cout << "YES";
                return 0;
        }
    }
    cout << "NO";
    return 0;

}