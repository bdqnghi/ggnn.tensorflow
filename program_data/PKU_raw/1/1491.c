int main()
{
	int n, t;
	cin >> n;
	for(t = 0;t < n;t++)
	{
		int m;
		cin >> m;
		int f(int a,int min);
		cout << f(m, 2) << endl;
	}
    return 0;
}
int f(int a, int min)
{
	int i = min;
	if(a < min)
	{ 
		return 0; 
	} 
	int result = 1; 
	while(i < a)
	{ 
		if(a % i == 0)
		{ 
			result += f(a / i,i); 
		}
		i++;
	}
	return result; 
} 
