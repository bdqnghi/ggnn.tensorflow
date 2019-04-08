int main()
{
	char shuru[500];
	cin.getline(shuru,500);
	int a = 0, i = 0;
	a = strlen(shuru);
	if(shuru[0] >= '0' && shuru[0] <= '9')
		cout << shuru[0];
	for(i = 0; i <= a - 1; i++)
	{
		if(i != 0)
		{
			if(shuru[i] >= '0' && shuru[i] <= '9')
				cout << shuru[i];
			if((shuru[i] < '0' || shuru[i] > '9') && (shuru[i - 1] >= '0' && shuru[i - 1] <= '9'))
				cout << endl;
		}
    }
	cout << endl;
	return 0;
}
