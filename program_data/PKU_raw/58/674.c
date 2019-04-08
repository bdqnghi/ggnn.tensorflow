// c??????
int main()
{
	int n,i,j;
	char str[100];
	cin >> n;
	cin.get();
	for(i = 0; i < n; i++)
	{
		cin.getline(str,100);
		for(j = 0; str[j] != '\0'; j++)
		{
			if(j == 0)
			{
				if(((str[j] - 'a') < 0 ||(str[j] - 'a') > 26)&&((str[j] - 'A') < 0 || (str[j] - 'A') > 26) && (str[j] != '_')) 
					break;
			}
            else if(((str[j] - '0') < 0 || (str[j] - '0') > 9) && ((str[j] - 'a') < 0 ||(str[j] - 'a') > 26)&&
				((str[j] - 'A') < 0 || (str[j] - 'A') > 26) && (str[j] != '_'))
				    break;
		}
		if(str[j] == '\0')
			cout << 1 << endl;
		else cout << 0 << endl;
	}
	
	return 0;
}