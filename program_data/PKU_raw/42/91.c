int main()
{
	int a[100000],n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
    for(i=0;i<=n-1;i++)
	{	if(a[i]!=k)
		{printf("%d",a[i]);
		break;}
	}
		for(j=i+1;j<=n-1;j++)
		{if(a[j]!=k)printf(" %d",a[j]);
		}
}