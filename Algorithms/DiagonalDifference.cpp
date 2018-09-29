
/* Given a square matrix, calculate the absolute difference between the sums of its diagonals.
For example, the square matrix arr is shown below:

Example:
  123
  456
  789
-> The left-to-right diagonal=1+5+9=15. The right to left diagonal=3+5+9=17. Their absolute difference is |15-17|=2 .

Input format:
The first line contains a single integer,n, the number of rows and columns in the matrix arr.
Each of the next n lines describes a row, arr[i], and consists of n space-separated integers arr[i][j].

Constraints:
-100 <= arr[i][j] <= 100
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a[100][100],n,c=0,d=0,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
         c = c+a[i][i];
    for(i=0;i<n;i++)
         d = d+a[i][n-1-i];
    sum = abs(c-d);
    printf("%d",sum);

    return 0;
}
