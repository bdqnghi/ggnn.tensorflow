int main()
{
	char str[1010], mark;
	int i, j, sum;
	cin >> str;
	i = j = 0;
	do{
		sum = 0;
		do{
			j++;
		    sum++;
		}while(str[i] - 'A' == str[j] - 'A' 
			|| str[i] - 'A' == str[j] - 'a'
			|| str[i] - 'a' == str[j] - 'A');
		if (str[i] >= 'a' && str[i] <= 'z')
			mark = str[i] - 'a' + 'A';
		else
			mark = str[i];
		cout << "(" << mark << "," << sum << ")";
		i = j;
	}while(str[i] != '\0');
	return 0;
}