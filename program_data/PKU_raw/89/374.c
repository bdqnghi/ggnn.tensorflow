

int main()
{
	int n;
	cin >> n;
	int l[10000],r[10000];
	memset(l,0,sizeof(l));
	memset(r,0,sizeof(r));
	while(1)
	{
		int a,b;
		cin >> a>>b;
		if(a==0 && b==0)
			break;
		l[a] = 1;
		r[b] +=1;
	}
	for(int i=0;i<n;i++)
	{
		if(l[i] == 0 && r[i] == n-1)
		{
			cout << i <<endl;
			return 0;
		}
	}
	cout <<"NOT FOUND"<<endl;
	return 0;

}