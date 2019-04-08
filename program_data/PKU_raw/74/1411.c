char f(int i)
{
	if(i==2||i==3)
		return ('1');
	else 
	{
		float k=i;
		k=sqrt(k);
		int m;
		for(m=2;m<=k;m++)if(i%m==0) break;
		if(m>k)return('1');
		else return ('0');
	}
}
char g(int i)
{
	if(i/10==0)return ('1');
	else
	{
		int y=0,m=i,j=1;
		while(m>0)
		{
			y=y*10+m%10;
			m=m/10;
		}
		if(y==i) return ('1');
		else return ('0');
	}
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i;
	char y='0';
	for(i=m;i<=n;i++)
	{
		if(f(i)=='1'&&g(i)=='1')
		{
				if(y=='0')
				{
					printf("%d",i);
					y='1';
				}
				else printf(",%d",i);
		}
	}
	if(y=='0')printf("no");
}

	