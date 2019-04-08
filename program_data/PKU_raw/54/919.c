
int dis(int x,int y);
int main()
{
    int m,n,k;

	scanf("%d%d",&n,&k);
	m=dis(n,k);
	printf("%d\n",m);
	return 0;
}

int dis(int x,int y)
{
    int min,m;
	int i,j;
	
	for(min=x+y;;min+=x)
	{
		m=min;
		for(i=1;i<=x;i++)
		{
			if(m%x!=y)
			{
				j=1;break;
			}
			m=m-y-m/x;
		}
		if(!j&&m>0)	break;
		j=0;
	}
	return(min);
}