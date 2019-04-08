
int main()
{
	char input[1005], reserve[1005];
	int i, j = 0, num[1005] = {0}, flag = 0;
	cin >> input;
	if( input[0] >= 'a')
	{
		input[0] -= ('a' - 'A');
	}
	reserve[0] = input[0];
	num[0] = 1;
	for( i = 1; input[i]!='\0'; i++ )
	{
		if( input[i] >= 'a')
		{
			input[i] -= ('a' - 'A');
		}
		if( input[i] == input[i - 1] )
		{
			num[j]++;
		}
		else
		{
			j ++;
			reserve[j] = input[i];
			num[j]++;
		}
	}
	reserve[j +1] = '\0';
	for( i = 0; reserve[i] != '\0'; i++ )
	{
		if( flag == 0 )
		{
			cout << "(" << reserve[i] << "," << num[i] << ")";
			flag = 1;
		}
		else
			cout << "(" << reserve[i] << "," << num[i] << ")";
	}

	return 0;
}