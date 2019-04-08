int main()
{
	char str[100];
	int space[100], num = 1;
	cin.getline(str,100);
	space[0] = strlen(str);
	str[space[0]] = ' ';
	for(int i = space[0] - 1; i >= 0; i--)
		if(str[i] == ' ')
		{
			for(int j = i + 1; j <=space[num-1 ]; j++)
				cout << str[j];
			space[num++] = i;
		}
	for(int k = 0; k < space[num - 1]; k++)
		cout << str[k];
	return 0;
}
