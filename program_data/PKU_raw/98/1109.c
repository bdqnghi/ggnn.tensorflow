int main ( )
{
	int n, i, j, k, m;
	char word[1000][41] = {'\0'}, newword[1000][81] = {'\0'};
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> word[i];
	}
	j = 0;
	k = 0;
	for(i = 0;i < n;i++)
	{
		m = strlen(word[i]);
		if(j+m > 80)//?????????????????>80
		{
			newword[k][j-1] = '\0';
			newword[k][j] = '\0';//??????
			k++;
			strcpy(newword[k], word[i]);//???????
			j = m;
			newword[k][j] = ' ';//???????
			j++;
		}
		else if(j+m==80)
		{
			strcat(newword[k], word[i]);//????
			k++;
			j = 0;
		}
		else
		{
			if(j==0)
			{
				strcpy(newword[k], word[i]);
				j += m;
				newword[k][j] = ' ';
				j++;
			}
			else
			{
				strcat(newword[k], word[i]);
				j += m;
				newword[k][j] = ' ';
				j++;
			}
		}
	}
	newword[k][j-1] = '\0';
	newword[k][j] = '\0';
	for(i = 0;i <= k;i++)
	{
		m = strlen(newword[i]);
		for(j = 0;j < m;j++)
		{
			if(j == m-1)
				cout << newword[i][j] <<endl;
			else cout << newword[i][j];
		}
	}
	return 0;
}