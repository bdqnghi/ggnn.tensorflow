int main()
{
	int n=0;
	char gender[8];
	char gen[40];
	float height[40];
	float male[40];
	float female[40];
	int malenum=0,femalenum=0;
	int i=0,j=0,k=0,l=0,m=0;
	float temp;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %f",&gender,&height[i]);
		gen[i]=gender[0];
		male[i]=0.0;
		female[i]=0.0;
	
	}
	for(i=0;i<n;i++)
	{
		if(gen[i]=='m')
		{
			male[j]=height[i];
			j++;
		}
			else if(gen[i]=='f')
			{
				female[k]=height[i];

				k++;
			}
	}

	malenum=j;
	femalenum=k;

	while(j--)
	{
		for(l=0;l<j;l++)
		{
			if(male[l]>male[l+1])
			{
				temp=male[l+1];
				male[l+1]=male[l];
				male[l]=temp;
			}
		}
	}

	while(k--)
	{
		for(l=0;l<k;l++)
		{
			if(female[l]<female[l+1])
			{
				temp=female[l+1];
				female[l+1]=female[l];
				female[l]=temp;
			}
		}
	}

	for(i=0;i<malenum;i++)
		printf("%.2f ",male[i]);
	for(i=0;i<(femalenum-1);i++)
		printf("%.2f ",female[i]);

	printf("%.2f",female[i]);

	return 0;
}