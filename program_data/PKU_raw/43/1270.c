
int judge(int n)
{
	int limit;
	int count = 0;
	
	limit = sqrt(n);
	
	for(int i = 2; i <= limit; i ++)
	{
		if(n % i == 0)
		count = 1;
	}
	
	if(count == 0)
	return 1;
	
	return 0;
}

int main ()
{
	int m;
	
	cin >> m;
	
	for(int i = 3; i <= m / 2; i += 2)
	{
		if(judge(i) == 1 && judge(m - i) == 1)
		cout << i << " " << m - i << endl;
	}
	
	return 0;
	
}