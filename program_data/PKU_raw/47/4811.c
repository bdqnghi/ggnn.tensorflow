int main()
{
	int n,i,m[100],t=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&m[i]);
	for(i=0;i<n/2;i++)
	{
		j=n-i-1;
		t=m[i];
		m[i]=m[j];
		m[j]=t;
	}
	printf("%d",m[0]);
	for(i=1;i<n;i++)
		printf(" %d",m[i]);
	return 0;
}