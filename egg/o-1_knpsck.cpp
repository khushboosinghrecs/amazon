int knapSack(int W, int wt[], int val[], int n) 
{ 
   // Your code here
   int arr[n+1][W+1];
   for(int i=0; i<=n; i++)
   {
       arr[i][0]=0;
   }
   for(int i=0; i<=W; i++)
   {
       arr[0][i]=0;
   }
   
   for(int i=1; i<=n; i++)
   {
       for(int j=1; j<=W; j++)
       {
           if(wt[i-1]<=j)
           {
               arr[i][j]=max(val[i-1]+arr[i-1][j-wt[i-1]], arr[i-1][j]);
           }
           else
           {
               arr[i][j]=arr[i-1][j];
           }
       }
   }
   return arr[n][W];
}
