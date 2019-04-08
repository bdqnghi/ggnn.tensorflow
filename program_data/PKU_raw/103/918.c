int main()
{
	char a[1001];
	int i = 1, k = 0;
	cin.getline(a, 1001);
	while(1)
	{
		if (a[i] == a[i - 1] || (a[i] - a[i - 1]) == 32 || (a[i] - a[i - 1]) == -32)
		   k++;
		else
		{
			if ((a[i - 1] - 'a') >= 0)
				a[i - 1] -= 32;
			cout << "(" << a[i - 1] << "," << k + 1 << ")";
			k = 0;
		}
		if (a[i] == '\0')
			break;
		i++;
	}
	return 0;
}
