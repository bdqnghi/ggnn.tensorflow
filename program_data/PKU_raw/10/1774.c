
int a[25];
int f(int x)
{
    int t=1,max=1;
    if(a[x+1]==0)
    max=1;
    else
    {
        for(int i=x+1;a[i]!=0;i++)
        if(a[x]>=a[i])
        {
                       t=f(i)+1;
                       if(t>max) max=t;
        } 
     }
    return max;
}
main()
{
      int n,t,max,i,M;
      scanf("%d",&n);
      memset(a,0,25*sizeof(int));
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
      }
      M=f(n-1);
      for(i=n-2;i>=0;i--)
      {
                        f(i); 
                        if(M<f(i))
                        M=f(i);
      }
      printf("%d",M);
      getchar();
      getchar();
}
