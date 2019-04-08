int max (int a,int b)
{
	if(a < b)
		return b;
	else
		return a;
}
int main()
{
	int num;
	int h[100];
	cin >> num;
	int i,j,k;
	for(i = 0; i < num; i ++)
		cin >> h[i];
	int f[100] = {0};
	f[0] = 1;
	for(i = 1; i  < num; i++)
	{
		f[i] = 1;
		for(j = 0; j < i; j ++)
		{
			if(h[i] <= h[j])
				f[i] = max(f[i],f[j]+1);
		}
	}
	int result = f[0];
	for(i = 1; i  < num; i ++)
	{
		result = max(f[i],result);
	}
	cout << result<<endl;
}