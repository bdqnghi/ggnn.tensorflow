
int main()
{
	int n[100],m[100];
	int i, num = 0;
	for (i = 0; i<100; i++)
	{
		cin >> n[i] >> m[i];
		if (n[i]==0 && m[i]==0)
		{
			break;
		}
		num++;
	}
	int j = 0;
	for (j; j<num; j++)
	{
		int s = 0;
		for (int k = 2; k<=n[j]; k++)
		{
			s = (s+m[j])%k;
		}
		cout << s+1 << endl; 
	}
	
	return 0;
}