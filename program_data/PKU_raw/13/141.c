int num[100000], n, i, j, k, m, l;
int main()
{
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for(j = 0; j < n - 1; j++)
		for(k = j + 1; k < n; k++)
		{
			if(num[j] == num[k]) 
				{num[k] = 0;}
		}
	for(m = 0, l = 0; m < n; m++)
	{
		if(num[m] >= 10) 
		{	
			l++;
			if(l == 1) {cout << num[m];}
			else {cout << " " << num[m];}
		}
	}cin>>i;
	return 0;
}