
int iFind(int *p, int findnum)
{
	int k, sum = 0;
	for (k = 0; k < 15; k++)
	{
		if (*(p + k) == findnum)
			sum ++;
	}
	return sum;
}


int main()
{
	int a[15], temp, i = 0, j, k, *p, sum = 0;
	p = a;
	for (j = 0; j < 15; j++)
		a[j] = -1;
	while (cin >> temp, temp != -1)
	{
		if (temp != 0)
		{
			a[i] = temp;
			i++;
		}
		else
		{
			for (k = 0; k < 15; k++)
			{
				sum += iFind(p, a[k] * 2);
			}
			cout << sum << endl;
			sum = 0;
			i = 0;
			for (j = 0; j < 15; j++)
				a[j] = -1;
		}
	}
	return 0;
}

				





	
    
