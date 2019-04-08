int main()
{
	char ch1[100],ch2[100];
	gets(ch1);
    gets(ch2);
	int i;
	int len1=strlen(ch1);
	int len2=strlen(ch2);
	int len=len1;
	
	if(len1>len2)
	{
		len=len2;
	}
	for( i=0;i<len1;i++)
	{
		if(ch1[i]>=65 && ch1[i]<=90)
		{
			ch1[i]=ch1[i]+32;
		}
	}
	for( i=0;i<len2;i++)
	{
		if(ch2[i]>=65 && ch2[i]<=90)
		{
			ch2[i]=ch2[i]+32;
		}
	}
	for(i=0;i<len;i++)
	{
		if(ch1[i]!=ch2[i])
		{
			if(ch1[i]>ch2[i]) 
			{
				cout<<">"<<endl;
				return 0;
			}
			else
			{
				cout<<"<"<<endl;
				return 0;
			}

		}
	}
	if(len1>len2) 
	{
		cout<<">"<<endl;
		return 0;
	}
	if(len1<len2) {
		       cout<<"<"<<endl;
				return 0;
				}
	if(len1==len2)
	{
		cout<<"="<<endl;
	     return 0;
	}
}
				
	



