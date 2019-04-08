void main()
{
	int a[300],i,j,n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;)
			if(a[i]==a[j])
			{for(m=j;m<n;m++)
			a[m]=a[m+1];
			n-=1;}
			else j++;
	printf("%d",a[0]);
	for(i=1;a[i]!=0;i++)
		printf(",%d",a[i]);
}