int main()
{
	int a[300],n,i,k=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=i;j>=0;j--)
		{
			if(a[i]==a[j])
				k++;
		}
		if(k==1&&i==0)
			printf("%d",a[i]);
		if(k==1&&i>0)
			printf(",%d",a[i]);
	}
	printf("\n");
	return 0;
}


