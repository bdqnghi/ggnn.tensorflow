
int min(int a, int b)
{
	if (a<b) return a;
	else return b;
}

int main()
{
	int n,m,s,t;
	cin>>n;
	for (int i=1; i<=n; ++i)
	{
		cin>>m;
		s=60;
		for (int j=1; j<=m; ++j)
		{
			cin>>t;
			t+=j+j+j-3;
			if (t<=60) s-=min(3,60-t);
		}
		cout<<s<<endl;
	} 
	return 0;
}