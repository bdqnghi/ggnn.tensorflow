
char str[1000];
int len;

int operation(int start)
{
	int i = start;
	int count = 0;
	for( ; str[i] == str[start]; i++)
		count++;
	cout << "(" << str[start] << "," << count << ")";

	return count;
}

int main()
{
	int i;
	cin >> str;
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] > 90)
			str[i] -= 32;
	}
	for(i = 0; i < len; i++)
		i += operation(i) - 1;
	cout <<endl;

	return 0;
}