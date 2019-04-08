void main()
{
	int n,i,j,k;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[j]==a[i])
			{
				for(k=j;k<n-1;k++)
					a[k]=a[k+1];
				if(a[j]==a[i])
					j--;
				n--;
			}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(",%d",a[i]);
}
