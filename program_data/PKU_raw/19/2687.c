

int main()
{
	char src[MAX];
	char find[MAX];
	char replace[MAX];

	char temp[MAX][MAX];
	gets(src);
	gets(find);
	gets(replace);

	int temp_count = 0;
	int iter = 0;
	for (int i = 0; i < strlen(src); i++)
	{
		if (src[i] == ' ')
		{
			for (int j = iter; j < i; j++)
			{
				temp[temp_count][j - iter] = src[j];
			}
			temp[temp_count][i - iter] = 0;
			temp_count++;
			iter = i + 1;
		}
	}
	for (int j = iter; j < strlen(src); j++)
	{
		temp[temp_count][j - iter] = src[j];
	}
	temp[temp_count][strlen(src) - iter] = 0;
	temp_count++;

	for (int i = 0; i < temp_count - 1; i++)
	{
		if (strcmp(temp[i], find) == 0)
		{
			cout << replace << " ";
		}
		else
		{
			cout << temp[i] << " ";
		}
	}
	if (strcmp(temp[temp_count - 1], find) == 0)
	{
		cout << replace << endl;
	}
	else
	{
		cout << temp[temp_count - 1] << endl;
	}

	return 0;
}