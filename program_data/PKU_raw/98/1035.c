int main()
{
	int n=0,count=0;
	cin>>n;cin.get();
	for(int i=0;i<n;i++)
	{
		char letter[50];
		cin>>letter;
		if(count+strlen(letter)+1>80)
		{
				count=0;
				cout<<endl;
		}
		if(count==0)
		{
			cout<<letter;
			count=strlen(letter);
		}
		else
		{
			cout<<' '<<letter;
			count+=1+strlen(letter);
		}
	}
	return 0;
}