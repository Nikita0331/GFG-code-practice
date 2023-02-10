bool findPair(int arr[], int size, int n){
    //codea
    int i=0,j=1;
    sort(arr,arr+size);
    while(j<size&&i<size)
    {
        if(abs(arr[j]-arr[i]<n)||i==j)
        {j++;}
        else if(i!=j&&abs(arr[j]-arr[i])>n)
        {i++;}
        else if(i!=j&&abs(arr[j]-arr[i]==n))
        {return true;
            break;
        }
    }
    return false;
    
}