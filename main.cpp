#include <iostream>
using namespace std;

long minimum = 9999999999;

void diff(long iterator, long len_arr, long sum_masha, long sum_petya, long *arr) {
    if ((iterator + 1) == len_arr) {
        minimum = min(minimum, abs(sum_masha - sum_petya));
    } else {
        diff(iterator + 1, len_arr, sum_masha + arr[iterator], sum_petya, arr);
        diff(iterator + 1, len_arr, sum_masha, sum_petya + arr[iterator], arr);
    }
}

int main() {
    long len_arr;
    cin >> len_arr;
    long arr[len_arr];

    for (long i = 0; i < len_arr; ++i) {
        cin >> arr[i];
    }
    diff(0, len_arr, 0, 0, arr);
    cout << minimum;

    return 0;
}
