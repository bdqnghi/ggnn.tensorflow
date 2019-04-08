
int main()
{
	char a[1001];
	int i, j, count = 1, len;
	cin.getline(a, 1001);
	len = strlen(a);
	for (i = 0; i <= strlen(a); i++)
	{
		if (a[i] > 'Z')
			a[i] = a[i] - ('a' -'A');
		if (i == 0)
			continue;
		if (a[i] == a[i - 1])
		{
			count++;
		}
		else
		{
			cout << "(" << a[i - 1] << "," << count << ")";
			count = 1;
		}
	}
	return 0;
}
