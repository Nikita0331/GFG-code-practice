long long int merge(long long arr[],long long l,long long m,long long h)
    {
        long long int L=m-l+1,R=h-m,Left[L],Right[R];
        //Left[L]=Right[R]=1e18;
        for(long long int i=0;i<L;i++)
        {
            //Left[i]=arr[k++];
            Left[i]=arr[i+l];
        }
        for(long long int i=0;i<R;i++)
        {
           // Right[i]=arr[k++];
           Right[i]=arr[m+1+i];
        }
        long long int i=0,j=0,t=l,c=0;
        while(i<L&&j<R)
        {
            if(Left[i]<=Right[j])
            {
                arr[t++]=Left[i++];
            }
            else
            {c+=L-i;
                arr[t++]=Right[j++];
                
            }
        }
        while(i<L)
        arr[t++]=Left[i++];
        while(j<R)
        arr[t++]=Right[j++];
        return c;
    }
    long long int mergesort(long long arr[],long long l,long long h)
    {
    //long long int l=0,h=N-1,mia,x,y,z;
    long long int mid,c=0;
        if(h>l)
        {
            mid=l+(h-l)/2;
            c+=mergesort(arr,l,mid);
            c+=mergesort(arr,mid+1,h);
            c+=merge(arr,l,mid,h);
        }
        return c;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr,0,N-1);
       
    }