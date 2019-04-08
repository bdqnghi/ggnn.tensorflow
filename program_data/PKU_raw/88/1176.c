int main()
{
	int l,i;
	char str[31];
	cin.getline(str,31,'\n');     //?????
	l=strlen(str);
	for(i=0;i<=l-1;i++)
	{
		if(str[i]<='9'&&str[i]>='0'&&(str[i+1]>'9'||str[i+1]<'0'))
		{
			cout<<str[i];
			cout<<endl;	
		}      //????????????????
		else if(str[i]<='9'&&str[i]>='0'&&str[i+1]<='9'
                                     &&str[i+1]>='0')
		{
			cout<<str[i];
			
		}      //?????????????????
	}
		return 0;
}