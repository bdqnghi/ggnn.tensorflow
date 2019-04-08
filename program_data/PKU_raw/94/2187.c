int main()
{
	int a[500]={0};
	int b[500]={0};

	int i,n;
	int j,temp;
	int p=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			b[p]=a[i];
			p=p+1;
		}
	}
	


	for(i=1;i<p-1;i++)
	for(j=0;j<=p-2;j++)
	{
	   if(b[j]>b[j+1])
	   {
	   temp=b[j+1];
	   b[j+1]=b[j];
	   b[j]=temp;
	   }
	}

	if(p==1) printf("%d",b[0]);
	else
	{
		printf("%d",b[0]);
		for(i=1;i<=p-1;i++)
			printf(",%d",b[i]);
	
	}

}