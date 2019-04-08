int main()
{
    int n,i,j,k,s,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&k);
      if(k==1||k==2)
      {
        printf("1\n");
        continue;
        }
        else
        {
          a=1;
          b=1;  
        for(j=3;j<=k;j++)
        {
           s=a+b;
           a=b;
           b=s;
           }
           printf("%d\n",s);
           }
           }
           getchar();
           getchar();
           }