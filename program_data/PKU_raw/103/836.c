int main()
{
    char s[1000];
	int len,i,j,t;
	cin>> s;
	len=strlen(s);
	i=0;t=0;
	while(i<len)
	{
		if(s[i+1]==s[i]||s[i+1]==s[i]+32||s[i+1]==s[i]-32){i++;t++;continue;}
		if(s[i+1]!=s[i])
		{
			if(s[i]>='a'){s[i]=s[i]-32;cout<<"("<<s[i]<<","<<t+1<<")";t=0;i=i+1;continue;}
			if(s[i]<'a'){cout<<"("<<s[i]<<","<<t+1<<")";t=0;i=i+1;continue;}
		}
	}
	return 0;
}