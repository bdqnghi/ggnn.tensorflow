
int main()
{
	int n;
	cin >> n;
	int i, j, k;
	char word[1000][45];

	for (i = 0; i < n; i++)
	{
		scanf("%s", word[i]);
	}
	int sumc = 0;
	for (i = 0; i < n; i++)
	{
	    sumc += strlen(word[i]) + 1;
	    if(sumc + strlen(word[i + 1])> 80)
	    {
	        cout << word[i];
	        cout << endl;
	        sumc = 0;
	    }
	    else if (sumc == 81)
	    {
	        cout << word[i];
	        cout << endl;
	        sumc = 0;
	    }
        else if (i == n - 1)
            cout << word[i];
        else cout << word[i] << " ";
	}
	cout << endl;
	return 0;
}
