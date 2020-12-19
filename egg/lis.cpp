int longestSubsequence(int n, int a[])
{
   // your code here
   int lis[n+1];
   for(int i=0; i<=n; i++)
   {
       lis[i]=0;
   }
   lis[0]=1;
   for(int i=1; i<n; i++)
   {
       lis[i]=1;
       for(int j=0; j<n; j++)
       {
           if(a[j]<a[i])
           {
              lis[i]=max(lis[i], lis[j]+1);
           }
       }
   }
   int mx=0;
   for(int i=0; i<n; i++)
   {
       if(lis[i]>mx)
       {
           mx=lis[i];
       }
   }
   return  mx;
   
}
