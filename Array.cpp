#include <iostream>

using namespace std;

int search(int arr[], int n, int x);

void insert(int arr[], int n, int x, int cap, int pos);

void deleteing(int arr[], int n, int x);

void large(const int arr[], int n);

void secondlarge(int arr[], int n);


void zerosend(int arr[], int n);


void reverse(int arr[], int n);

void leftrotate(int arr[], int n);


int main() {
    int arr[10] = {6, 5, 10, 12, 20, 80, 45, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    cout << search(arr, n, 1);
    cout << endl;
    insert(arr, n, 69, 10, 2);
    deleteing(arr, 10, 69);
    cout << endl;
    large(arr, n);
    cout << endl;
    secondlarge(arr, n);
    cout << endl;
    int arr2[] = {8, 0, 0, 7, 40, 0, 4};
    int z = sizeof(arr2) / sizeof(arr[0]);
    zerosend(arr2, z);
    cout << endl;
    reverse(arr, n);
    cout << endl;
    leftrotate(arr, n);
}

int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return arr[i];
        }
    }
    return -1;
}

void insert(int arr[], int n, int x, int cap, int pos) {
    if (n == cap)
        cout << n;
    int inx = pos - 1;
    for (int i = n - 1; i >= inx; i--) {
        arr[i + 1] = arr[i];
    }
    arr[inx] = x;
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

void deleteing(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            break;
    }
    if (i == n)
        cout << n;
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    cout << endl;
    for (int z = 0; z < 10; z++) {
        cout << arr[z] << " ";
    }
}

void large(const int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[res])
            res = i;
    }
    cout << res;
}

void secondlarge(int arr[], int n) {
    int slarge = -1;
    int large = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[large]) {
            slarge = large;
            large = i;
        } else if ((slarge == -1) || (arr[i] < arr[large])) {
            if (arr[i] > arr[slarge])
                slarge = i;
        }
    }
    cout << slarge;
}

void zerosend(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            if (i != 0)
                arr[i] = 0;
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

void reverse(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    while (low < high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void leftrotate(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
