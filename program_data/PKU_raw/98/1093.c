int main()
{
	int n;
	cin>>n;
		char str[1000][40];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>*(str+i);
	}
	int len;
	
	for(i=0;i<n;i++)
	{
		len=0;
		while(true)
		{
			len+=strlen(*(str+i));
			if(len+strlen(*(str+i+1))+1>80||i>=n)
			{
				cout<<*(str+i)<<endl;
				break;
			}
			else
			{
				cout<<*(str+i);
				if(len+1+strlen(*(str+i+1))<=80&&i<n-1)
				{cout<<" ";len++;}
			}i++;
		}
		//cout<<endl;
	}
	return 0;
}