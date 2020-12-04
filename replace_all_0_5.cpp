int convertFive(int n) {
    // Your code here
    int r=0;
    int count=-1;
    while(n)
    {
        count++;
        if(n%10==0)
        {
            r=r+5*pow(10, count);
        }
else
{
    r=r+n%10*pow(10, count);
}
n=n/10;
    }
    return r;
}
