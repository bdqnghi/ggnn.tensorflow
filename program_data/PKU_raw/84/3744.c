int max(int a[],int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[k])
			k=i;
	}
	i=a[k];
	a[k]=0;
	return i;

}
int main()
{
	int n;
	scanf("%d",&n);
	int a[100],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n%d",max(a,n));
	printf("\n%d",max(a,n));
	return 0;
}

