int main()
{
    int n;
	scanf("%d",&n);
	char ren[50][10];
	double h[50];
	int i;
	char boy[50][10];
	char girl[50][10];
	double hb[50];
	double hg[50];
	int k1=0,k2=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",ren[i]);
		scanf("%lf",&h[i]);
		
		if(strlen(ren[i])==4)
		{
			strcpy(boy[k1],ren[i]);
			hb[k1]=h[i];
			k1++;

		}
		else
		{
			strcpy(girl[k2],ren[i]);
			hg[k2]=h[i];
			k2++;
		}
	}
	int k;
	for(k=1;k<=k1;k++)
	{
		for(i=0;i<k1-k;i++)
		{
			if(hb[i]>hb[i+1])
			{
				double e;
				e=hb[i];
				hb[i]=hb[i+1];
				hb[i+1]=e;
			}
		}

	}
	for(i=0;i<k1;i++)
	{
		if(i!=0)
		{
			printf(" ");
		}
		printf("%.2lf",hb[i]);

	}
		for(k=1;k<=k2;k++)
	{
		for(i=0;i<k2-k;i++)
		{
			if(hg[i]>hg[i+1])
			{
				double e;
				e=hg[i];
				hg[i]=hg[i+1];
				hg[i+1]=e;
			}
		}

	}
	for(i=k2-1;i>=0;i--)
	{
		
		printf(" ");
		printf("%.2lf",hg[i]);

	}
	
	return 0;

}
