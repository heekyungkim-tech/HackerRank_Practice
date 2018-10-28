/* Mini-Max Sum
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Input Format:
A single line of five space-separated integers.

Constraints:
1 <= arr[i] <= 10^9

Sample Input:
1 2 3 4 5

Sample Output:
10 14

If we sum everything except 1, our sum is 2+3+4+5 = 14. // maximum
If we sum everything except 2, our sum is 1+3+4+5 = 13.
If we sum everything except 3, our sum is 1+2+4+5 = 12.
If we sum everything except 4, our sum is 1+2+3+5 = 11.
If we sum everything except 5, our sum is 1+2+3+4 = 10. // Minimum
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  int minVal = a[0], maxVal = a[0];
  long long sum = a[0];
  for (int i = 1; i < 5; i++) {
    minVal = min(minVal, a[i]);
    maxVal = max(maxVal, a[i]);
    sum += a[i];
  }
  cout << sum - maxVal << " " << sum - minVal << endl;
  return 0;
}
