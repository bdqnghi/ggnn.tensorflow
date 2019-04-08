int main()
{
	int n,i,j,max;
	float average,sum=0,distance,maxdistance,temp,sign;
	unsigned int num[300];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	average=sum/n;
	for(i=1;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			if(num[j]<num[j-1])
			{
				temp=num[j];
				num[j]=num[j-1];
				num[j-1]=temp;
			}
		}
	}
	maxdistance=0;
	for(i=0;i<n;i++)
	{
		distance=(num[i]-average>0)?(num[i]-average):(average-num[i]);
		if(distance>maxdistance)
			maxdistance=distance;
	}
	for(i=0;i<n;i++)
	{
		distance=(num[i]-average>0)?(num[i]-average):(average-num[i]);
		if(distance==maxdistance)
		{
			printf("%d",num[i]);
			break;
		}
	}
	for(i++;i<n;i++)
	{
		distance=(num[i]-average>0)?(num[i]-average):(average-num[i]);
		if(distance==maxdistance)
		{
			printf(",%d",num[i]);
			break;
		}
	}
	printf("\n");

	return 0;
}