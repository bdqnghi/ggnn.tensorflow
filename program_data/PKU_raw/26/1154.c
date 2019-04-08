int main()
{
	char a[101];
	cin.get(a, 101);
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] != ' ')
			cout << a[i];
		if(a[i] == ' ' && a[i+1] != ' ')
		{
			cout << a[i] << a[i+1];
			i++;
		}
	}
	return 0;
}