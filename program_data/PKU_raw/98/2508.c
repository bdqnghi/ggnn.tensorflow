


int main()
{
	int n;
	cin>>n;
	char word[200];
	cin.get();
	int sum;
	cin.getline(word,200,' ');
	cout<<word;
	sum=strlen(word)+1;
	for(int i=1;i<n;i++)
	{
		cin.getline(word,200,' ');
		if(sum+strlen(word)>80)
		{
			cout<<endl<<word;
			sum=0;
		}
		else
		{
			cout<<' '<<word;
		}
		sum+=strlen(word)+1;
	}
	return 0;
}
