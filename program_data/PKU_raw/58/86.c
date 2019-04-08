int main()
{
	int n=0;
	cin>>n;
	cin.get();
	while(n-->0)
	{
		char str[100];
		int i=0,sum=0,h;
		cin.getline(str,100);
		h=strlen(str);
		for(i=1;i<h;i++)
		{
			if(((str[i]>='0')&&(str[i]<='9'))||((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))||(str[i]=='_'))
			{
				sum=sum+1;
			}
		}
		if(((str[0]>='A')&&(str[0]<='Z'))||((str[0]>='a')&&(str[0]<='z'))||(str[0]=='_'))
		{
			sum=sum+1;
		}
		if(sum==h)
		{
			cout<<"1"<<endl;
		}
		if(sum!=h)
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}