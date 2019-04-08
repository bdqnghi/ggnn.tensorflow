
int main()
{
	int n;
	scanf("%d",&n);
	int i,m,j,p;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		int time=0;
		for(j=1;j<=m;j++)
		{
			if(time<60)
			{
				scanf("%d",&p);
				time=p+3*j;
			}
			if(time>=60){break;}
		}
		if(time<=60)printf("%d\n",60-3*m);
		if(time>60)
		{
			if( p < ( 60-3*(j-2) ) )printf("%d\n",p);
			if( p >= ( 60-3*(j-2) ) )printf("%d\n",60-3*(j-1));
		}
	}

	return 0;
}