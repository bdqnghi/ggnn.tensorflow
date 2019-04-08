int f(int m,int n)
{
    if(m<0) return 0;
    else if(n==1) return 1;
    else return f(m,n-1)+f(m-n,n);
}
main()
{
      int t,m,n,i,j,g;
      scanf("%d",&t);
      for(g=0;g<t;g++)
      {
                      scanf("%d %d",&m,&n);
                      printf("%d\n",f(m,n));
      }
}