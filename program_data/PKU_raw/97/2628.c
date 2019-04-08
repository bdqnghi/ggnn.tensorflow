

int main()
{
    int a,n,c[100],i,j = 0,sum = 0,q;
	cin >> a;
	while (1)
	{
		sum = sum + 100;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 100;
			break;
		}
	}
	cout << j<<endl;
	j = 0;
while (1)
	{
		sum = sum + 50;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 50;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 20;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 20;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 10;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 10;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 5;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 5;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 1;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 1;
			break;
		}
	}
cout << j<<endl;
    return 0;
}

