int main()
{
	int f(int x,int y);
	int t,m[20],n[20];
	cin >> t;
	for (int i=0;i<t;i++)
	{
	cin >> m[i] >> n[i];
	}
	for (int i=0;i<t;i++)
	{
		cout << f(m[i],n[i]) << endl;
	}
	return 0;
}
int f(int x,int y)
{
	if (x==0||y==1)
	return 1;
	if (x<y)
	return f(x,x);     
	return f(x,y-1)+f(x-y,y);
}
