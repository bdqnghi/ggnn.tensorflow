char a[81];
void do_a(void)
{
	if (a[0] == '\n')
	{
		for (int i = 0; i < strlen(a) ; i++)
		{
			a[i] = a[i + 1];

		}
	}
	if (a[strlen(a) - 1] == '\n')a[strlen(a) - 1] = '\0';
}
int main()
{
	int b;
	cin >> b;
	int t = 0;
	for (int i = 0; i<b;i++)
	{
		cin.getline(a,90, ' ');
		do_a();
		t += strlen(a);
		
		if (t>=81||t==strlen(a))
		{
			cout << endl << a;
			t = strlen(a) + 1;
		}
		else
		{
			cout << " " << a;
			t += 1;
		}
	}
}