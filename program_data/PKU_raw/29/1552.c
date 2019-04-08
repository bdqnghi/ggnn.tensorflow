int main()
{
	int m,n,a,b;
	float s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a=2;b=1;s=0;
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			s+=((float)a)/b;
			a+=b;
			b=a-b;
		}
		printf("%.3f\n",s);
	}
	return 0;
}
