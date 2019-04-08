int main()
{
	char str[1010], a;
	int c = 1;
	cin>>str;
	for(int i = 1; i < strlen(str); i++)
	{
		if(str[i] != str[i - 1] && str[i] != str[i - 1] + 32 && str[i] != str[i - 1] - 32)
		{
			if(str[i - 1] < 'Z')   a = str[i - 1];   
			else   a = str[i - 1] - 32;
			cout<<'('<<a<<','<<c<<')';
			c = 1;
		}
		else  c++;
	}
	if(str[strlen(str) - 1] < 'Z')   a = str[strlen(str) - 1];   
	else   a = str[strlen(str) - 1] - 32;
	cout<<'('<<a<<','<<c<<')'<<endl;
	return 0;
}