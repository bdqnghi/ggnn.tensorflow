int main()
{
    int n;
    int i,j,k;
    int x;
    int p,q;
    scanf("%d",&n);
    for(i=6;i<=n;i=i+2)
    {
        for(j=3;j<=i/2;j=j+2)
        {
            p=0;
            for(k=2;k<sqrt(j)+1;k++)
            {
                if(j%k==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
               q=0;
               for(k=2;k<sqrt(i-j)+1;k++)
               {
                  if((i-j)%k==0)
                  {
                    q=1;
                    break;
                  }
               }
               if(q==0)
               {
                   printf("%d=%d+%d\n",i,j,i-j);
                   break;
               }
            }
        }
    }
    return 0;
}
