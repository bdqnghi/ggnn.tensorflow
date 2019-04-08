int N,n,m;
int max(int x,int y)
{
    int c;
    if(y<=0)
    {
        if(y==0)
        c=1;
        else
        c=0;
    }
    else
    {
        if(x==1)
            c=1;
        else
            c=max(x-1,y)+max(x,y-x);
    }
    return(c);
}
main()
{
      int i;
      scanf("%d",&N);
      for(i=1;i<=N;i++)
      {
          scanf("%d%d",&n,&m);
          printf("%d\n",max(m,n));
      }
     }