int main()
{
	int x[5][5],m[5],h[5],l[5],n=0,an[5],hh[5],ll[5],k=0;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	m[0]=x[0][0];
	m[1]=x[1][0];
	m[2]=x[2][0];
	m[3]=x[3][0];
	m[4]=x[4][0];
	h[0]=1;
	h[1]=2;
	h[2]=3;
	h[3]=4;
	h[4]=5;
	l[0]=1;
	l[1]=2;
	l[2]=3;
	l[3]=4;
	l[4]=5;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(m[i]<=x[i][j])
			{
				m[i]=x[i][j];
				l[i]=j;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		if(m[i]<=x[0][l[i]]&&m[i]<=x[1][l[i]]&&m[i]<=x[2][l[i]]&&m[i]<=x[3][l[i]]&&m[i]<=x[4][l[i]])
		{
			n+=1;
			an[k]=m[i];
			hh[k]=h[i];
			ll[k]=l[i]+1;
			k+=1;
		}
	}
	if(n==0)
	{
		printf("not found");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("%d %d %d",hh[i],ll[i],an[i]);
		}
	}
	return 0;
}