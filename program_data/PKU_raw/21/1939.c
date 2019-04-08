void main()
{
	int a[300],n,i,j,temper;
	float average,sum=0,b[300];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	average=sum/n;
    //printf("%f",average);
	for(i=0;i<n;i++)
	{
		if(a[i]>average)
		b[i]=a[i]-average;
		else
		b[i]=average-a[i];
	}
	//for(i=0;i<n;i++)
	//{
		//printf("%d",b[i]);
	//}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{temper=a[i];
			a[i]=a[j];
			a[j]=temper;
			temper=b[i];
			b[i]=b[j];
			b[j]=temper;}

		}

	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==b[0])
		printf(",%d",a[i]);
	}

}
