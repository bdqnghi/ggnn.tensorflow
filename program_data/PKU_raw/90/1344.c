main()
{
      int m[100],n[100],a[100],t;
      int ppp(int m,int n);
      int fff(int m,int n);
      for(int i=0;i<100;i++)
      {
              a[i]=0;
      }
      scanf("%d",&t);
      for(int i=0;i<t;i++)
      {
              scanf("%d %d",&m[i],&n[i]);
              a[i]=ppp(m[i],n[i]);
      }
      for(int i=0;i<t;i++)
      {
              printf("%d\n",a[i]);
      }
}
int ppp(int m,int n)
{
    int p;
    int fff(int m,int n);
    if(n>1)
    p=ppp(m,n-1)+fff(m,n);
    else if(n==1)
    p=1;
    return(p);
}
int fff(int m,int n)
{
    int f;
    if(m>n)
    f=ppp(m-n,n);
    else if(m==n)
    f=1;
    else if(m<n)
    f=0;
    return(f);
}
              
