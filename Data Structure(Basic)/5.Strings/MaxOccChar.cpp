class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
        for(int i=0;i<str.length();i++)
        {
            int num=0;
            char ch=str[i];
                num=ch-'a';
            arr[num]++;
            
        }
        int ma=-1,res=-1;
        for(int i=0;i<26;i++)
        {
            if(ma<arr[i])
            {
                res=i;
                ma=arr[i];
            }
        }
        char ans='a'+res;
        return ans;
    }

};