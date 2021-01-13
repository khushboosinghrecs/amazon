
int findPlatform(int arr[], int dep[], int n)
{
	// Your c=ode here
sort(arr, arr+n);
sort(dep, dep+n);
int i=0, j=0, p=0, res=-1; 
while(i<n && j<n)
{
    if(arr[i]<=dep[j])
    {
        p++;
        i++;
        res=max(res, p);
    }
   else if(arr[i]>=dep[j])
    {
        p--;
        j++;
    }
   /* if(arr[i]==dep[j])
    {
        i++; j++;
    }*/
}
return res;
    
}
