int main(int argc, char* argv[])
{
	int i,n,j,a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=100;j>=0;j--)
	{
		if(j>=n)
			continue;

		else if(j<n&&j>0)
			printf("%d ",a[j]);
		else if(j==0)
		printf("%d",a[0]);
	}
	

	return 0;
}
