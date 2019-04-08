int main()
{
	char str[1000];
	int i,j,flag=1;
	cin.getline(str,1000);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(flag==0&&str[i]!=' ')cout<<' ';
		if(str[i]==' ')flag=0;
		else {flag=1;cout<<str[i];}
	}
	return 0;
}