int CF(int n)
{
    int i,a=1;
    for(i=1;i<=n;i++)
    a=a*10;
    return a;
}
int SS(int n)
{
    int i,a;
    if(n==2)
    a=1;
    else
    for(i=2;i<n;i++)
    {
                    if(n%i==0)
                    {
                              a=0;
                              break;
                    }
                    else
                    a=1;
    }
    return a;
}
int HW(int n)
{
    int i,j,k,l,a,b=0,c;
    a=n;
    c=n;
    for(i=0;a>0;i++)
    {
                 a=a/10;   
    }
    for(j=1;j<=i;j++)
    {
                 k=c/CF(i-j);
                 b=b+k*CF(j-1);
                 c=c-k*CF(i-j);
    }
    if(n==b)
    return 1;
    else
    return 0;
}
main()
{
      int m,n,i,j=0,k;
      scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      if(SS(i)==1&&HW(i)==1)
      {
                             if(j==0)
                             printf("%d",i);
                             else
                             printf(",%d",i);
                             j++;
      }
      if(j==0)
      printf("no");
      getchar();
      getchar();
}
