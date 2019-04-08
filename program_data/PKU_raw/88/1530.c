int main()
{
	char a[31];
	int i;
	cin.getline(a, 31);
	for (i = 0; i <= strlen(a) - 1; i++)
	{
		if (*(a + i) >= '0' && *(a + i) <= '9')
			cout << *(a + i);
		else
		{
			cout << endl;
			while (*(a + i) < '0' || *(a + i) > '9')
				i++;
			i--;
		}
	}
	return 0;
}