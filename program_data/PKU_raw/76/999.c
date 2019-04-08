int main()
{
	struct qujian
	{
		int a,b;
	}
	qj[5000];
	int n,i,j,a,b,min,max,sz[10000],t;
	t=1;
	min=10000;
	max=0;
	scanf("%d",&n);
	for(i=0;i<10000;i++)
	{
		sz[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		for(j=a;j<b;j++)
		{
			sz[j]=1;
		}
		qj[i].a=a;
		qj[i].b=b;
		if(qj[i].a<min)
		{
			min=qj[i].a;
		}
		if(qj[i].b>max)
		{
			max=qj[i].b;
		}
	}
	for(i=min;i<max;i++)
	{
		if(sz[i]==0)
		{
			t=0;
		}
	}
	if(t==0)
	{
		printf("no");
	}else
	{
		printf("%d %d",min,max);
	}
	return 0;
}

