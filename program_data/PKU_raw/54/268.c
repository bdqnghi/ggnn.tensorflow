int main()
{
 int m,k,n,i,p,q=1;
 scanf("%d %d",&n,&k);
 p=n;
 for(i=1;i<=n;i++)
 { 
  q=q*n;
 }
 m=q-p*k+k;
 printf("%d",m);
}