int main()
{
	int i,n,a,b,l=0,r=0;
	char qujian[N];
	memset(qujian,0,sizeof(qujian));
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		for(i=a;i<b;i++)
		qujian[i]++;
	}
	for(i=0;i<N;i++)
	{
		if(qujian[i])
		{l=i;
		break;}
	}
	for(i=N;i>0;i--)
	{
		if(qujian[i-1])
		{
		 r=i;
		break;}
	}
	for(i=l;i<r;i++)
	{
		if(!qujian[i])
		{
			printf("no");
			return 0;
		}
	}
	printf("%d %d",l,r);
	
}