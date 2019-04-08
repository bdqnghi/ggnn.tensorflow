
int main( )
{
	char str[100000];
	cin.getline(str, 100000);

	int i;//flag?????????

	for (i = 1; str[i] != '\0'; )
	{
		if ( str[i] == ' ' && str[i+1] == ' ' )
		{
			for (int j=i+1; str[j]!='\0';j++)
				str[j]=str[j+1];
		}
		else 
			i++;
	}

	cout<<str;

	return 0;
}