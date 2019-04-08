int main()
{
    int prime(int x);
    int n,p=3,q,num;
    scanf("%d",&n);
    for (p=3;p<=(n/2);p=p+2)
      {
         q=n-p;
         if (prime(p)==1&&prime(q)==1)
           printf("%d %d\n",p,q);   
         else 
           continue;
      }
   }
int prime (int x)
{
    int i,k;
    k=(int)sqrt(x);
    for (i=2;i<=k;i++)
    {
        if (x%i==0)
        break;
    }
    if (i==k+1)
      return 1;
    else
      return 0;
}      
