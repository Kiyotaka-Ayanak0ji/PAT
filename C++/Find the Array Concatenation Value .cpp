/* You are given a 0-indexed integer array nums.
The concatenation of two numbers is the number formed by concatenating their numerals.

For example, the concatenation of 15, 49 is 1549.
The concatenation value of nums is initially equal to 0. Perform this operation until nums becomes empty:

If there exists more than one number in nums, pick the first element and last element
in nums respectively and add the value of their concatenation to the concatenation value of nums,
then delete the first and last element from nums.

If one element exists, add its value to the concatenation value of nums, then delete it.
Return the concatenation value of the nums.

    Input: nums = [7, 52, 2, 4]
    Output: 596

    7 + 4 = 74   \
                  => 522+74 = 596 .. ans
    52+2 = 522   /
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int ans = 0;

    int temp;
    int i = 0;
    while(true){
        cin >> arr[i];
        i++;
        if(cin.get() == '\n'){
            break;
        }
    }

    int start = 0;
    int end = i-1;

    while(start < end){
        res += arr[start]*10 + arr[end];
        
    }
    
    
    return 0;
}