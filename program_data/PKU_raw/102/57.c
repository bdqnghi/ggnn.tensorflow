int main()
{
	int n,i,m=0,f=0,k;
	char sex[10];
	char s[10]={"male"};
	double h;
	struct
	{
		char sex[10];
		double h;
	}
	qq[40],male[40],female[40],e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",sex);
		scanf("%lf",&h);
		strcpy(qq[i].sex,sex);
		qq[i].h=h;
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(qq[i].sex,s))
		{
			female[f]=qq[i];
			f++;
		}
		else
		{
			male[m]=qq[i];
			m++;
			
		}
	}
	for(i=1;i<m;i++)
	{
		for(k=0;k<m-i;k++)
		{
			if(male[k].h>male[k+1].h)
			{
				e=male[k];
				male[k]=male[k+1];
				male[k+1]=e;
			}
		}
	}
    for(i=1;i<f;i++)
	{
		for(k=0;k<f-i;k++)
		{
			if(female[k].h>female[k+1].h)
			{
				e=female[k];
				female[k]=female[k+1];
				female[k+1]=e;
			}
		}
	}
	printf("%.2lf",male[0].h);
	for(i=1;i<m;i++)
	{
		printf(" %.2lf",male[i].h);
	}
	for(i=f-1;i>=0;i--)
	{
		printf(" %.2lf",female[i].h);
	}
	return 0;
}
