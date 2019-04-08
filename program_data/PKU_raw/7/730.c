int main()
{
	char str[256],subs[256],rpl[256];
	int i,j,len1=0,len2=0,c=0,m;
	cin>>str>>subs>>rpl;
	len1=strlen(subs);
	len2=strlen(rpl);
	for(i=0;i<256&&str[i]!=0;i++)
	{
		if(str[i]==subs[0])
		{
			c=0;
			for(j=0;j<len1;j++)
			{
				if(str[i+j]!=subs[j])
				{
					c=1;
					break;
				}
				else
				{
					c=c+1;
				}
			}
		}
		if(c==len1)
		{
			break;
		}
	}
	if(c==0)
	{
		for(m=0;m<256&&str[m]!=0;m++)
		{
			cout<<str[m];
		}
	}
	if(c==len1)
	{
		for(m=0;m<i;m++)
		{
			cout<<str[m];
		}
		for(m=i;m<i+len2;m++)
		{
			cout<<rpl[m-i];
		}
		for(m=i+len2;m<256&&str[m]!=0;m++)
		{
			cout<<str[m];
		}
	}
	return 0;
}



