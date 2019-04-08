int main()
{
	int sz[5][5];
	int i,k;
	int t,a,b,m,n,p,q=0;
	for(i=0;i<5;i++)
	{
		for(k=0;k<5;k++)
		{
		    scanf("%d",&sz[i][k]);
		}
	}
	for(m=0;m<5;m++)
	{
		p=0;
		t=-100;
		for(n=0;n<5;n++)
		{
			if(sz[m][n]>t)
			{
				t=sz[m][n];
				a=m;
				b=n;
			}
		}
		for(i=0;i<5;i++)
		{
			if(sz[i][b]>=sz[a][b])
			{
				p++;
			}
		}
		if(p==5)
		{
			printf("%d %d %d",a+1,b+1,sz[a][b]);
		}
		else
		{
			q++;
		}
	}
	if(q==5){
		printf("not found");
	}
	return 0;
}