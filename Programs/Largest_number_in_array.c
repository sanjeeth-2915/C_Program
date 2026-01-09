int largest(int arr[], int n) 
{
    int ans = 0;
    
    for(int i=0; i<n; i++){
        if(ans < arr[i])
        ans=arr[i];
    }
        return ans;
}
