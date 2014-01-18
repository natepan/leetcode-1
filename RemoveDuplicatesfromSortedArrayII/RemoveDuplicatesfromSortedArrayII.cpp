//============================================================================
// Remove Duplicates from Sorted Array II
// Follow up for "Remove Duplicates":
// What if duplicates are allowed at most twice?
//
// For example,
// Given sorted array A = [1,1,1,2,2,3],
//
// Your function should return length = 5, and A is now [1,1,2,2,3].
//
// Complexity
// O(n) time
//============================================================================

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n < 2) return n;
        int i = 1, j = 1;
        bool first = true;
        while (i < n) {
            if (A[i-1] != A[i]) A[j++] = A[i], first = true;
            else if (first) A[j++] = A[i], first = false;
            i++;
        }
        return j;
    }
};

int main() {
    return 0;
}
