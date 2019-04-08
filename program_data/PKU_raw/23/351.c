
int main ()
{

	char temp[10000], word[100][20];
	cin.getline(temp,1000);
	int space[100] = {0}, i, num_of_space = 0, j,k, end;

	for (i = 0; temp[i] != '\0'; i++)
		;
	end = i;	//	?????	
	for (i = 0; i < end; i++) //??????
	{
		if (temp[i]==' ')
		{
			num_of_space ++ ;
			space[num_of_space] = i;

		}
	}

	if (num_of_space != 0)
	{
	for (i = 0; i < space[1]; i++)
	{
		word[0][i] = temp[i];
	}
	word[0][i] = '\0';

	for (i = 1; i < num_of_space; i++)
	{
		for (j = 0; space[i]+j+1 < space[i+1];j++)
		{
			word[i][j] = temp[space[i]+j+1];
		}
		word[i][j] = '\0';
	}

	for (i = space[num_of_space]+1 ; i < end; i++)
		word[num_of_space][i-space[num_of_space]-1] = temp[i];

	word[num_of_space][i-space[num_of_space]-1] = '\0';

	cout << word[num_of_space];

	for (i = num_of_space-1; i >=0; i--)
		cout << ' '<<word[i];

	cout << endl;
	}

	else
		cout << temp << endl;
        
    
    return 0;
}
