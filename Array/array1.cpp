#include <iostream>
#include <climits>   // for INT_MAX
using namespace std;

int main() {
    int arr[] = {34, 432, 2323, 23, 333, 2, 9, 2, -5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int position = -1;

    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            position = i;
        }
        if(arr[i] > largest) {
            largest = arr[i];
        }
        
    }

    cout << "Smallest element = " << smallest<<endl;
    cout << "larest element = " << largest<<endl;
    cout<<position+1;

    return 0;
}
