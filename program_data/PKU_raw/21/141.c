void main()
{
	int n,i,j;
	int a[300];
	float k=0.0,temp,tempo;
	float b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		k=k+a[i];
	}
	k=k/n;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(a[i]-k);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				tempo=b[i];
				b[i]=b[j];
				b[j]=tempo;

			}
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==b[0])
			printf(",%d",a[i]);
	}

}

