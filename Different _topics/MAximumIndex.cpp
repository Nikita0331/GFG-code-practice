int maxIndexDiff(int A[], int n) 
    { 
        // Your code here
        int c=0;
        for(int i=0;i<n;i++)
        {
            int j=n-1;
            while(i<j)
            {
                if(A[i]<=A[j])
                {
                    c=max(c,j-i);
                    break;
                }
                j--;
            }
        }
        return c;
    }