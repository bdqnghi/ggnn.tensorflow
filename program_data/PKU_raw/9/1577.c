struct Pa
{
	char num[20];
	int year;
}pa[100];
void main()
{
	int i,j,x=0,d=0,m,n;
	int b[100];


	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s%d",pa[i].num,&pa[i].year);
	}
	for(i=0;i<n;i++)
		b[i]=pa[i].year;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				d=b[j];
				b[j]=b[j+1];
				b[j+1]=d;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=60)
		{
		if(i==0)
		{
			for(j=0;j<n;j++)
			{
				if(pa[j].year==b[i])
					printf("%s\n",pa[j].num);
			}
		}
		else
		{
		if(b[i]!=b[i-1])
		{
			for(j=0;j<n;j++)
			{
			if(pa[j].year==b[i])
					printf("%s\n",pa[j].num);
			}
		}
		}
		}
		if(b[i]<60)
			break;
	}
	for(i=0;i<n;i++)
	{
	if(pa[i].year<60)
		printf("%s\n",pa[i].num);
	}

}

