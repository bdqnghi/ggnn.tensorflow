
int main(int argc, char* argv[])
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[n-i-1]);
	   
	}
	for(i=0;i<n-1;i++)
	{
    printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}

