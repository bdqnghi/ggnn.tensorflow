int main()
{
	int a[100],n,i,count=0;
	int *pt=a;
	scanf("%d",&n);
	for(i=0;i<n;i++,pt++)
		scanf("%d",pt);
	for(i=n-1;i>=0;i--)
	{
		if(count==0)
		{
			printf("%d",*(a+i));
			count++;
		}
		else
			printf(" %d",*(a+i));
	}
	printf("\n");
	return 0;
}