int main()
{
	char str[100];
	gets(str);
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==' ' && str[i+1]==' ')
		{
			for(int j=i;j<strlen(str);j++)
				str[j]=str[j+1];
			i--;
		}
	}
	cout<<str<<endl;
	return 0;
}