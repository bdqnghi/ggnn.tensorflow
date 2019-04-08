void main()
{ int n,k,m,i,t;
  scanf("%d%d",&n,&k);
  
  for(m=n+k;;m+=n)
{  t=m;
   for(i=1;i<=n;i++)
{  if(i==n) break;
if(t%n!=k||t<n+k) break;
       t=(t-k)*(n-1)/n;
   } 
    if(i==n&&t%n==k&&t>n+k) break;
}
    printf("%d",m);
}
