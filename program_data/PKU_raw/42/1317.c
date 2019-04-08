int main()
{
	int num[100001], size, i, r, k, del;
	cin >> size;
	for (i = 1; i <= size; i++)
	{
		cin >> num[i];
	}
	cin >> del;
	for (i = 1; i <= size; i++)
	{
		if (num[i] == del)
		{
			size--;
			for (r = i; r <= size; r++)
			{
				num[r] = num[r + 1];
			}
			i--;
		}
	}
	for (i = 1; i <= size; i++)
	{
		cout << num[i];
		if (i == size)
		{
			cout << endl;
		}
		else 
		{
			cout << " ";
		}
	}
	return 0;
}
