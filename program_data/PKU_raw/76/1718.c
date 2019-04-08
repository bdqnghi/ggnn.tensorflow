int main()
{
	int n,min,max,f;
	struct{
		int a,b;
	}i[50000];
	int s[10000];
	for(int u=0;u<10000;u++)
	{
		s[u]=0;
	}
	scanf("%d",&n);
	max=0;
	min=0;
	for(int c=0;c<n;c++)
	{
		scanf("%d%d",&i[c].a,&i[c].b);
		if(c==0)
		{
			min=i[c].a;
			max=i[c].b;
		}
		if(c>0)
		{
			if(i[c].a<min)
			{
				min=i[c].a;
			}
			if(i[c].b>max)
			{
				max=i[c].b;
			}
		}
	}
	for(int d=min;d<=max;d++)
	{
		s[d]=1;
	}
	for(int c=0;c<n;c++)
	{
		for(int g=min;g<=max;g++)
		{
			if(g>=i[c].a&&g<i[c].b)
			{
				s[g]=0;
			}
		}
	}
	s[max]=0;
	f=1;
	for(int e=min;e<=max;e++)
	{
		if(s[e]==1)
			f=f*0;
		else
			f=f*1;
	}
	if(f==1)
		printf("%d %d",min,max);
	else
		printf("no");
	return 0;
}