
/* Simple Array Sum
Given an array of integers of size N. Print the sum of the array's elements as a single integer.

Input Format:
The first line contains an integer, n, denoting the size of the array.
The second line contains n space-separated integers representing the array's elements.

Constraints:
0 < n, ar[i] <= 1000

Sample Input:
6
1 2 3 4 10 11

Output:
a single value equal to the sum of the elements in the array.
For the sample above you would just print 31 since 1+2+3+4+10+11=31.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {
    int ar[1000],n,i,sum=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
        {
        scanf("%d", &ar[i]);
        sum+=ar[i];
    }
    printf("%d",sum);

    return 0;
}
