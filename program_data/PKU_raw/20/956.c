int main()
{
	char str[15],substr[4];
	while(cin>>str>>substr)
	{
		int i, position, length;
		char max = str[0];
		length = strlen(str);
		for(i = 1;i < length; i++)
		{
			if(str[i] > max)
			{
				max = str[i];
				position = i;
			}
		}
		for(i = length - 1; i >= position + 1; i--)
			str[i + 3] = str[i];
		for(i = position + 1; i < position + 4; i++)
			str[i] = substr[i - position - 1];
		str[length + 3] = '\0';
		cout<<str<<endl;
	}
	return 0;
}


