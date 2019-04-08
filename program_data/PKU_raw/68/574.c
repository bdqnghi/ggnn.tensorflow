void main()
{
 int n,i,m,j,y,k;
 scanf("%d",&n);
 for(i=6;i<=n;i=i+2)
 {
  for(m=3;m<=i/2;m=m+2)
   {
    for(j=3;j<=sqrt(m);j+=2)
     if(m%j==0)break;
    if(j<=sqrt(m))continue;
    y=i-m;
    for(j=3;j<=sqrt(y);j+=2)
      if(y%j==0)break;
    if(j>sqrt(y)) 
   {
    printf("%d=%d+%d\n",i,m,y);
    break;
    } 
   else
      continue;
   }

  }
}
