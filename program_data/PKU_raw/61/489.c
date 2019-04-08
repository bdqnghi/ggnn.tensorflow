
int n;
int num[maxx];

int com(int x)
{
	if(x ==1 || x ==2)
	{
		return 1;
	}
	return com(x-1) + com(x-2);
}
int main()
{
	int temp;
	while(cin >> n)
	{
		while(n--)
		{
			cin >> temp;
			cout << com(temp) <<endl;
		}
	}
	return 0;
}