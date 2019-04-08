int main()
{
	char str[1000],temp;
	int i,count = 1;
	cin >> str;
	if(str[0] >= 97 && str[0] <= 122)
		temp = str[0] - 32;
	else
		temp = str[0];
	for(i = 1 ; i < strlen(str) ; i++)
	{
		if(str[i] == temp || str[i] - 32 == temp)
		{
			count++;
		}
		else if(str[i] >= 65 && str[i] < 90)
		{
			cout << "(" << temp << "," << count << ")";
			temp = str[i];
			count = 1;
		}
		else if(str[i] >= 97 && str[i] < 122)
			{
			cout << "(" << temp << "," << count << ")";
			temp = str[i] - 32;
			count = 1;
		}
	}
	cout << "(" << temp << "," << count << ")";
	return 0;
}