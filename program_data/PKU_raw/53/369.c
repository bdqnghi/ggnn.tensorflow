
void main()
{
	int n,i,j,a[301];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for (i=1;i<=n-1;i++)
		for (j=i+1;j<=n;j++)
			if (a[j]!=0)
				if (a[j]==a[i]) a[j]=0;
	printf("%d",a[1]);
	for (i=2;i<=n;i++)
		if (a[i] != 0) printf(",%d",a[i]);
}