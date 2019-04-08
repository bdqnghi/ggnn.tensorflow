int main()
{
	long n,i,j,x,y,ans,b[200];
	scanf("%d",&n);
for (i=1;i<=100;i++) b[i]=0;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&x);
if (b[x]==0) 
  if (i==1) printf("%d",x);else printf(" %d",x);
b[x]=1;
	}

}