
  /*
    Given an array of integers, calculate the fractions of its elements that are positive,
    negative, and are zeros.
    It should print out the ratio of positive, negative and zero items in the array, each on a separate line rounded to six decimals.

    Input Format:
    The first line contains an integer, n, denoting the size of the array.
    The second line contains  space-separated integers describing an array of numbers.
    arr(arr[0],arr[1],arr[2],...,arr[n-1])

    Constraints:
    0 < n <=100
    -100 <= arr[i] <= 100

    Output Format:
    A decimal representing of the fraction of positive numbers in the array compared to its size.
    A decimal representing of the fraction of negative numbers in the array compared to its size.
    A decimal representing of the fraction of zeros in the array compared to its size.

    Sample Input:
    6
    -4 3 -9 0 4 1

    Sample Output:
    0.500000            -> 3/6 = 0.500000
    0.333333            -> 2/6 = 0.333333
    0.166667            -> 1/6 = 0.166667
  */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int v1=0, v2=0, v3=0;
    cin>>n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>> arr[i];

        if (arr[i]>0){
            v1++;
        }
        if (arr[i]<0){
            v2++;
        }
        if (arr[i]==0){
            v3++;
        }
    }
    cout<<setprecision(6)<<(float)v1/n <<endl;
    cout<<setprecision(6)<<(float)v2/n <<endl;
    cout<<setprecision(6)<<(float)v3/n <<endl;

    return 0;

}
