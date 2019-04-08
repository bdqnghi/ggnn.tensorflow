void main()
{
	float a[300],b[2],aver,max,e=0.001;
	int i,j=0,n;
	scanf("%d",&n);
	scanf("%f",&a[0]);
	aver=a[0];
	for(i=1;i<n;i++)
	{
		scanf(" %f",&a[i]);
		aver=aver+a[i];
	}
	aver=aver/n;

	max=fabs(aver-a[0]);
	for(i=1;i<n;i++)
	{
		if(fabs(aver-a[i])>max)
			max=fabs(aver-a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-aver)>max-e&&fabs(a[i]-aver)<max+e)
		{b[j]=a[i];j++;}
	}

	if(j==1)
		printf("%.0f",b[0]);
	else
	{
		if(b[0]<b[1])
			printf("%.0f,%.0f",b[0],b[1]);
		else
			printf("%.0f,%.0f",b[1],b[0]);
	}
}