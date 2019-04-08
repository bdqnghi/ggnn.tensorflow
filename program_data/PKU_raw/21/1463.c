void main()
{
	int n;
	unsigned int num[300],ttl=0;
	float dlt[300];
	int rmb[300];
	float avrg,t1;
	int i,j,t,t2;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		ttl+=num[i];
	}

	avrg=(double)ttl/n;

	for(i=0;i<n;i++)
	{
		if((double)num[i]>=avrg)
			dlt[i]=(double)num[i]-avrg;
		else
			dlt[i]=avrg-(double)num[i];
	}

	t1=dlt[0];
	for(i=1;i<n;i++)
	{
		if(t1<=dlt[i])
			t1=dlt[i];
	}

	j=0;
	for(i=0;i<n;i++)
	{
		if(dlt[i]==t1)
		{
			rmb[j]=num[i];
			j++;
		}
	}

	t=j;
	for(i=0;i<t-1;i++)
		for(j=i+1;j<t;j++)
		{
			if(rmb[i]>rmb[j])
			{
				t2=rmb[i];
				rmb[i]=rmb[j];
				rmb[j]=t2;
			}
		}

	printf("%d",rmb[0]);
	for(i=1;i<t;i++)
	{
		printf(",%d",rmb[i]);
	}
}