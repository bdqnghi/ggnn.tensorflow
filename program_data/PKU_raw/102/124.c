

int main()
{
	int i,j,n,nm=0,nf=0;
	char c[50][10];
	float a[50];
	float male[50],female[50],temp;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %f",&c[i],&a[i]);
		if (c[i][0]=='m')
		{
			male[nm]=a[i];
			nm++;
		}
		else
		{
			female[nf]=a[i];
			nf++;
		}
	}
	for (i=0;i<nm-1;i++)
	{
		for (j=0;j<nm-1-i;j++)
		{
			if (male[j]>male[j+1])
			{
				temp=male[j];
				male[j]=male[j+1];
				male[j+1]=temp;
			}
		}
	}
	for (i=0;i<nf-1;i++)
	{
		for (j=0;j<nf-1-i;j++)
		{
			if (female[j]<female[j+1])
			{
				temp=female[j];
				female[j]=female[j+1];
				female[j+1]=temp;
			}
		}
	}
	for (i=0;i<nm;i++)
	{
		printf("%.2f ",male[i]);
	}
	for (i=0;i<nf-1;i++)
	{
		printf("%.2f ",female[i]);
	}
	printf("%.2f",female[i]);
	return 0;
}