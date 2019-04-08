int main()
{
	char str[10]={'\0'};
	cin.getline(str,10);
	for(int i=strlen(str)-1;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}