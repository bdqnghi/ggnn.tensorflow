int main()
{
	char str[100];
	cin.getline(str,31);
	int len=strlen(str),temp=0;
	for (int i=0;i<len;i++)
	{
		if (str[i]>='0' && str[i]<='9' && (str[i+1]>'9' || str[i+1]<'0'))
			cout<<atoi(str+temp)<<endl;
		if ((str[i]<'0' || str[i]>'9') && str[i+1]<='9' && str[i+1]>='0')
			temp=i+1;
	}
	return 0;
}