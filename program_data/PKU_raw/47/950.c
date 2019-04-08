int main()
{
	int i,j,k,m,n,u;
	int a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	for(j=0;j<n;j++)
	{
		b[j]=a[n-1-j];
	}
	for(m=0;m<n;m++)
	{
		printf("%d",b[m]);
		if(m<n-1)
		{
			printf(" ");
		}
	}
return 0;
}