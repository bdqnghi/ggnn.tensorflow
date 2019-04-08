int main()
{
	int i,m;
	char str[101];
	cin.getline(str,101,'\n');
	m=strlen(str);
	for(i=0;i<m;i++)
		if(str[i]!=32||(str[i]==32&&str[i+1]!=32))
			cout<<str[i];
	return 0;
}
