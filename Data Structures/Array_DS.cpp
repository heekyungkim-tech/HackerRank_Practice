/*
Given an array, A, of N integers, print each element in reverse order as a single line of space-separated integers.

Input Format:
The first line contains an integer, N (the number of integers in A).
The second line contains N space-separated integers describing A.

constraints:
1 <= N <= 1000
1 <= Ai <= 10000, where Ai is the ith integer in A.

Sample Input:
4
1 4 3 2

Output:
2 3 4 1
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int j = n - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;
}
