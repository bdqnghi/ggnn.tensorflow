int main()
{
	char str[1100];
	int i=0,p=0,used[1100];
	int len=0,sum=0;
	cin.getline(str,1100);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
		else
			str[i]=str[i];
	}
	for(i=0;i<len;i++)
	{
		used[i]=1;
	}
	for(i=0;i<len;i++)
	{
		if(used[i]!=0)
		{
			p=i+1;
			while(str[i]==str[p])
			{
				used[i]++;
				used[p]=0;
				p++;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		if(used[i]!=0)
			cout<<"("<<str[i]<<","<<used[i]<<")";
	}
	return 0;
}
