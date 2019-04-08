int main()
{
	char shuru[500];
	cin.getline(shuru,500);
	int i = 0, a = 0, j = 0;
	char *p = NULL;
	a = strlen(shuru);
	p = shuru;
	cout << shuru[0];
    for(i = 0; i <= a - 1; i++)
	{
		if(i >= 1)
		{
			if((shuru[i] == ' ' && shuru[i - 1] != ' ') || shuru[i] != ' ')
				cout << shuru[i];
		}
    }
	return 0;
}