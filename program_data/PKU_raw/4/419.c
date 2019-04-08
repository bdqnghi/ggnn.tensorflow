int main()
{
	int r,c,a[100][100]={0};
	int i,j,rs,re,cs,ce,s;

	scanf("%d%d",&r,&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}

	for(rs=0,cs=0,re=0,ce=0;(re+ce)<(r+c);)
	{
		for(i=rs,j=cs;i<=re&&j>=ce;i++,j--)
		{
			printf("%d\n",a[i][j]);

		}
		if(cs<(c-1))
			cs++;
		else
			rs++;
		if(re<(r-1))
			re++;
		else
			ce++;
	}
	return 0;
}