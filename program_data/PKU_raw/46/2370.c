int main()
{
 int m,n,a[100][100];
 int p,i,j,k,q,s,ys,hs;
 scanf("%d %d",&m,&n);
 for(i=1;i<=m;i++)
  {
   for(j=1;j<=n;j++)
   {
	scanf("%d",&a[i][j]);
   }
  }
 if(m<=n)
 {
   p=m/2;
   ys=m%2;
   hs=1;
 }
 else 
 {
   p=n/2;
   ys=n%2;
   hs=2;
 }
 for(i=1;i<=p;i++)
 {
	for(j=i;j<=n-i;j++)
	{
		printf("%d\n",a[i][j]);
    }
	for(k=i;k<=m-i;k++)
	{printf("%d\n",a[k][n+1-i]);}
	for(q=n-i+1;q>=i+1;q--)
	{printf("%d\n",a[m+1-i][q]);}
	for(s=m+1-i;s>=i+1;s--)	
	{printf("%d\n",a[s][i]);}
 }
if(ys==1)
 {
		if(hs==1)
		{
			for(i=(m+1)/2;i<=n-(m-1)/2;i++)
			{printf("%d\n",a[(m+1)/2][i]);}
		}
		if(hs==2)
		{
			for(i=(n+1)/2;i<=m-(n-1)/2;i++)
			{printf("%d\n",a[i][(n+1)/2]);}
		}
 }
scanf("%d %d",&m,&n);		
 return 0;
}