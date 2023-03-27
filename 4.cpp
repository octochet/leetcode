class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0, k = 0;
        int m = a.size();
        int n = b.size();
        float c[m+n];
        while(i < m && j < n)
        {
            if(a[i] < b[j])
            {
                c[k] = a[i];
                i++;
            }
            else
            {
                c[k] = b[j];
                j++;
            }
            k++;
        }
        while(i < m)
        {
            c[k] = a[i];
            i++;
            k++;
        }
        while(j < n)
        {
            c[k] = b[j];
            j++;
            k++;
        }
        if((m+n)%2 == 0)
            return (c[(m+n)/2] + c[(m+n)/2 - 1])/2.00000;
        else
            return c[(m+n)/2];
    }
};