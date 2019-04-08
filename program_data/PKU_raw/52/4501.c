int main()
{
	int n,m;
	int a[100];
	int i,j,k;
	int temp;

	scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
	    scanf("%d",a+i);
	for(j=n-m;j<n;j++)
		for(k=0;k<n-m;k++)
		{
			temp=*(a+j-k);
			*(a+j-k)=*(a+j-1-k);
			*(a+j-1-k)=temp;
		}
	for(i=0;i<n;i++)
		printf("%d%c",*(a+i),(i==n-1)?'\n':' ');
	return 0;
}