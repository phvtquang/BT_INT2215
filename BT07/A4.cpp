//binarysearch
#include <algorithm>
#include <iostream>
using namespace std;

int BSearch(int a[], int left, int right, int x)
{
        int mid;
        while ( left <= right){
            //lay pt o giuaa
            mid = ( left + right ) /2;
            //so sanh
            if ( a[mid] == x ) {
                return mid+1;
            }
            if ( a[mid] < x) {
                left=mid+1;
            }
            if ( a[mid] > x) {
                right=mid +1;
            }

        }
        return -1;
}

int a[1000];
int x;
int main()
{
    int n;

    cout << "nhap n " << endl;
    cin >> n;
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << "nhap x " << endl;
    cin >> x;
    
    cout << BSearch(a,0,n-1,x);
}

