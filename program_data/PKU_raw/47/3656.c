int main(int argc, char* argv[])
{
	int n,i,a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=n-1;i>0;i--)
	{
		printf("%d ",b[i]);
	}
    printf("%d",a[0]);
	return 0;
}
