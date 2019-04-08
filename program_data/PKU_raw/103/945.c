int main()
{
	char str[1000];
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))
			str[i]-=32;
	}
	for(int i=0;i<strlen(str);i++)
	{
		cout<<'('<<str[i]<<',';
		int j=1;
		while(str[i+j]==str[i])
		{
			j++;
		}
		cout<<j<<')';
		i+=(j-1);
	}
	cout<<endl;
	return 0;
}