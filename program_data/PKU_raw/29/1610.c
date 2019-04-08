int main()
{
	int m,n,i;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>n;
		double a=1,b=1,c=2,d=0,e=0,f;
		for(f=1;f<=n;f++)
		{
			d=d+c/b;//??
			e=b;//????b???e
			b=c;//????c???b
			c=c+e;//???c?????b+c
		}
		printf("%.3f\n",d);
	}
		return 0;
}


