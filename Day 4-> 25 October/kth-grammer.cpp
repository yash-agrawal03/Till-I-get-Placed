class Solution
{
public:
    int kthGrammar(int n, int k)
    {
        if (n == 1)
            return 0;

        // Calculate the length of the current row
        int length = (1 << (n - 1));

        // Check if k is in the first half of the row
        if ((k - 1) < (length / 2))
            // Recurse on the previous row with the same position k
            return kthGrammar(n - 1, k);
        else
            // Recurse on the previous row with an adjusted position and invert the symbol
            return 1 - kthGrammar(n - 1, k - length / 2);
    }
};
// 0
// 01
// 0110
// 01101001