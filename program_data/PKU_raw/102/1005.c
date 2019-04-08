int main()
{
	int n,i,j,k=0,l=0;
	double a[1000],male[1000],female[1000],m;
	char sex[1000][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",sex[i]);
		scanf("%lf",&a[i]);
		if(sex[i][0]=='m')
		{
			male[k]=a[i];
			k++;
		}else if(sex[i][0]=='f')
		{
			female[l]=a[i];
			l++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(male[i]>male[j])
			{
				m=male[j];
				male[j]=male[i];
				male[i]=m;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(female[i]<female[j])
			{
				m=female[j];
				female[j]=female[i];
				female[i]=m;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%.2lf ",male[i]);
	}
	for(j=0;j<l-1;j++)
	{
		printf("%.2lf ",female[j]);
	}
	printf("%.2lf",female[l-1]);
	return 0;
}




