int main()
{
	int a[10000];
	int i,n;
	int max,max2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=0;
	for(i=0;i<n;i++)
		if(max<=a[i]) 
		{
			max=a[i];
		}
	max2=0;
	for (i=0;i<n;i++)
		if ((a[i]<max)&&(a[i]>=max2)) max2=a[i];
	printf("%d\n%d\n",max,max2);
	return 0;
} 