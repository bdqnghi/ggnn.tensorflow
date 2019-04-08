
int main()
{
	int n;
	scanf("%d",&n);
	char sex[100][10],empty[10];
	double len[100],male[100],female[100];
	int i,m=0,f=0,numm,numf,j;
	for(i=0;i<n;i++)
	{
		gets(empty);
		scanf("%s %lf",sex[i],&len[i]);
		if(sex[i][0]=='m')
		{
			male[m]=len[i];
			m=m+1;
		}
		if(sex[i][0]=='f')
		{
			female[f]=len[i];
			f=f+1;

		}
	}
	double e;
	for(i=0;i<m;i++)
	{
		for(j=1;j<m-i;j++)
		{
			if(male[j]<male[j-1])
			{
				e=male[j-1];
				male[j-1]=male[j];
				male[j]=e;

			}
		}
	}
	for(i=0;i<f;i++)
	{
		for(j=1;j<f-i;j++)
		{
			if(female[j]>female[j-1])
			{
				e=female[j-1];
				female[j-1]=female[j];
				female[j]=e;

			}
		}
	}
	for(i=0;i<m;i++)
		printf("%.2lf ",male[i]);
	for(i=0;i<f;i++)
	{
		if(i==f-1)
			printf("%.2lf",female[i]);
		else
			printf("%.2lf ",female[i]);
	}
	return 0;




}