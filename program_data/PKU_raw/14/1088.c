struct s
	{
		int a;
		int sc[2];
	};
void main()
{
	struct s st[100000];
	int t=0,j=0,max=0,p[3]={-1,-1};
	long n,i;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&st[i].a,&st[i].sc[0],&st[i].sc[1]);
		st[i].sc[0]=st[i].sc[0]+st[i].sc[1];
	}
	i=0;
	while(t<3)
	{
		if(i<n&&i!=p[0]&&i!=p[1])
		{
			j=(st[i].sc[0]>max)? i:j;
			max=(st[i].sc[0]>max)? st[i].sc[0]:max;
			i++;
		}
		else if(i<n&&(i==p[0]||i==p[1]))
			i++;
		else if(i=n)
		{
			printf("%d %d\n",j+1,max);
			p[t]=j;
			t++;
			j=0;
			max=0;
			i=0;
		}
	}
}