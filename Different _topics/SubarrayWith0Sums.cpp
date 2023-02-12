class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int a[], int n)
    {
        int psum=0;
    map<int ,int> m;
    m[0]=0;
    for(int i=0;i<n;i++)
    {
        psum+=a[i];
        if(m.find(psum)!=m.end())
        return true;
        else
        m[psum]=1;
    }
    return false;
        //Your code here
    }
};