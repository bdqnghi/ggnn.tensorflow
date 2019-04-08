int main()
{
	int a[100000];
	int *p;
	p=a;
	int i,m,k,n,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(m=i;m<n;m++)
				*(p+m)=*(p+m+1);
			l=l+1;
			i=i-1;
		}
	}
	for(i=0;i<n-l;i++)
		if(i<n-(l+1))printf("%d ",a[i]);
	else printf("%d",a[i]);
	return 0;
}