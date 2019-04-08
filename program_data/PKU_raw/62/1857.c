
int main()
{
	char chsentence[100000];
	char chnew[100000];
	int i, j, nlen;
	memset(chsentence, 0, sizeof(chsentence));
	memset(chnew, 0, sizeof(chnew));
	cin.getline(chsentence, 100000);
	for (i = 0, j = 0; chsentence[i] != '\0'; i++)
	{
		if(chsentence[i] != ' ')
		{
			chnew[j] = chsentence[i];
			j++;
		}
		else if (chsentence[i] == ' ')
		{
			if (chsentence[i - 1] == ' ')
				continue;
			else
			{
				chnew[j] = chsentence[i];
				j++;
			}
		}

	}
	nlen = strlen(chnew);
	for (i = 0; i < nlen; i++)
		cout << chnew[i];
	return 0;
}