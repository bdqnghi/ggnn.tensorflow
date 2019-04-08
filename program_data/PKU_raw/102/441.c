int main()
{
	int n,i,j,k,nmale=0,nfemale=0;
	char s[40][7];
	double a[40],e;
	double male[40],female[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",s[i],&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i],"male")==0)
		{
			male[nmale]=a[i];
			nmale++;
		}
		else
		{
			female[nfemale]=a[i];
			nfemale++;
		}
	}
	for(j=0;j<nmale;j++)
	{
		for(k=0;k<nmale-j-1;k++)
		{
			if(male[k]>male[k+1])
			{
				e=male[k];
				male[k]=male[k+1];
				male[k+1]=e;
			}
		}
	}
	for(j=0;j<nfemale;j++)
	{
		for(k=0;k<nfemale-j-1;k++)
		{
			if(female[k]<female[k+1])
			{
				e=female[k];
				female[k]=female[k+1];
				female[k+1]=e;
			}
		}
	}
	for(j=0;j<nmale;j++)
	{
		if(j==0)
		{
			printf("%.2lf",male[j]);
		}
		else
		{
			printf(" %.2lf",male[j]);
		}
	}
	for(j=0;j<nfemale;j++)
	{
		printf(" %.2lf",female[j]);
	}
	return 0;
}

