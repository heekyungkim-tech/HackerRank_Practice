
/* Compare the Triplets
   Return an array of two integers denoting the respective comparison points earned by Alice and Bob.

compareTriplets has the following parameter(s):
  a: an array of integers representing Alice's challenge rating
  b: an array of integers representing Bob's challenge rating

Input Format:
  The first line contains 3space-separated integers,a[0],a[1],and a[2] describing the respective values in triplet a.
  The second line contains 3space-separated integers,b[0],b[1],and b[2]describing the respective values in triplet b.

Constraints:
  1 <= a[i] <= 100
  1 <= b[i] <= 100

Sample Input:
5 6 7
3 6 10

sample Output:
a[0]>b[0],so Alice receives 1 point. a[1]>b[1],so nobody receives a point. a[2]>b[2],so Bob receives 1 point
1 1
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3],b[3],aPoints = 0,bPoints = 0;

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for(int i = 0; i < 3; i++){
        if(a[i] > b[i])aPoints++;
        else if(a[i] < b[i])bPoints++;
    }
    cout << aPoints << " " << bPoints << endl;
    return 0;
}
