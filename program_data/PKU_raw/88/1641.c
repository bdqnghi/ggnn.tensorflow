int main ()
{
	char c[31];
	cin.getline(c,31);
	int n = sizeof(c);
	for (int i = 0; i < n; i++)
	{
		if (isdigit(c[i]))
			cout << c[i];
		else
			cout << endl;
	}
	return 0;
}