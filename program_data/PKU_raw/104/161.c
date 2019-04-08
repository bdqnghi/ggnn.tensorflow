void main()
{
	int a,b;
	int ai[500],bi[500];
	scanf("%d%d",&a,&b);
	int i;
	ai[0]=a;
	bi[0]=b;
	int a_n=0,b_n=0;
	for(i=0;ai[i]!=0;i++)
	{
		ai[i+1]=ai[i]/2;
		a_n++;
	}
	for(i=0;bi[i]!=0;i++)
	{
		bi[i+1]=bi[i]/2;
		b_n++;
	}
	int eq=0;
	int j;
	for(i=0;i<a_n;i++)
	{
		for(j=0;j<b_n;j++)
		{
			if(ai[i]==bi[j])
			{
				eq=ai[i];
				break;
			}
		}
		if(eq!=0)
			break;
	}
	printf("%d\n",eq);
}