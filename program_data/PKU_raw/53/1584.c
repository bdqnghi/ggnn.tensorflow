int main()
{
	int i,j,n,m,a[100],s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n-1;j++)
		for(i=j+1;i<n;i++)
		{
			if(a[i]==a[j]&&a[j]!=0) a[i]=0;
		}
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0) {s[j]=a[i];j++;}
	}
	m=j;
	for(i=0;i<m-1;i++)
		printf("%d,",s[i]);
	printf("%d\n",s[m-1]);

}