int prime(int n)
{
    int i,flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            return 0;
        }
    }
    if(flag!=0)
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
   for(i=2;i<=n/2;i++)
   {
       if(prime(i)==1)
       {
           if(prime(n-i)==1)
           {
               printf("%d %d\n",i,n-i);
           }
       }
   }
   }

