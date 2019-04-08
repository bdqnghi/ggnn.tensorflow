int f(int m)
{
  int n=m%10;
  do
  {
    m=m/10;
    n=10*n+m%10;
  }
  while(m/10!=0);
  return(n);
}
  void main()
{
  int m,k,i,p,q,n,b,a=0;
  scanf("%d %d",&p,&q);
  for(m=p;m<=q;m++)
  {
    k=sqrt(m);
    for(i=2;i<=k;i++)
     if(m%i==0) break;
    if(i>=k+1)
    {
      n=f(m);  
      if(n==m) {printf("%d",m);break;}
    }   
  }
  for(b=m+1;b<=q;b++)
  {
    k=sqrt(b);
    for(i=2;i<=k;i++)
     if(b%i==0) break;
    if(i>=k+1)
    {
      n=f(b);  
      if(n==b) printf(",%d",b);
    }   
  }
  for(m=p;m<=q;m++)
  {
    k=sqrt(m);
    for(i=2;i<=k;i++)
     if(m%i==0) break;
    if(i>=k+1)
    {
      n=f(m);  
      if(n==m) a++;
    }   
  }
  if(a==0) printf("no");
}