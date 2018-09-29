
/* A Very Big sum
Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

aVeryBigSum has the following parameter(s):
  ar: an array of integers .

Input Format:
  The first line of the input consists of an integer n.
  The next line contains n space-separated integers contained in the array.

Constraints:
  1 <= n <= 10
  0 <= ar[i] <= 10^10

Sample input:
  5
  1000000001  1000000002  1000000003  1000000004  1000000005

Sample Output:
  5000000015

Note: You might need to use long long int in C/C++ in case the resulting sum might exceed the above range
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
int n;
long long int sum=0;

cin >> n;

vector<int> arr(n);

for(int arr_i = 0;arr_i < n;arr_i++)
{
cin >> arr[arr_i];
sum+=arr[arr_i];
}

cout<<sum;
return 0;

}
