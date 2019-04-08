struct zimu
{
	char a;
	int sum;
};
int main()
{
	char a[400]={'\0'};
	int i,j,k=0,n,h=1,sum=1;
	struct zimu shu[400],t;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if('A'<=a[i] && a[i]<='Z')
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					sum++;
					a[j]=0;
				}
			}
			shu[k].a=a[i];
			shu[k].sum=sum;
			h=0;
			k++;
			sum=1;
		}
	}
	if(h==0)
	{
		for(i=1;i<=k-1;i++)
		{
			for(j=0;j<k-1;j++)
			{
				if(shu[j].a>shu[j+1].a)
				{
					t=shu[j];
					shu[j]=shu[j+1];
					shu[j+1]=t;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			printf("%c=%d\n",shu[i].a,shu[i].sum);
		}
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if('a'<=a[i] && a[i]<='z')
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					sum++;
					a[j]=0;
				}
			}
			shu[k].a=a[i];
			shu[k].sum=sum;
			h=2;
			k++;
			sum=1;
		}
	}
	if(h==2)
	{
		for(i=1;i<=k-1;i++)
		{
			for(j=0;j<k-1;j++)
			{
				if(shu[j].a>shu[j+1].a)
				{
					t=shu[j];
					shu[j]=shu[j+1];
					shu[j+1]=t;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			printf("%c=%d\n",shu[i].a,shu[i].sum);
		}
	}
	if(h==1)
	{
		printf("No\n");
	}
	return 0;
}


