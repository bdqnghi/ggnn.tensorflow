int main()
{
	int n,sum=0;
	char word[41]={0};
	cin>>n;
	cin>>word;
	sum+=strlen(word);
	cout<<word;
	memset(word,0,sizeof(word));
	for(int i=1;i<n;i++)
	{
		cin>>word;
		sum+=strlen(word)+1;
		if(sum>80)
		{
			cout<<endl<<word;
			sum=strlen(word);
		}
		else cout<<' '<<word;
	}
	return 0;
}


