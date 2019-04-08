
int main()
{
	int a[20000],i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]) break;
		
		if(j==i-1)
		{
			printf(" ");
			printf("%d",a[i]);
		}
		}
			
		

	return 0;
}