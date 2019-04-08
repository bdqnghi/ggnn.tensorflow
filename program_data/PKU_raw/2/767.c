int main()
{
	int k;
	cin>>k;
	int book;
	char writer[26];
	int counter[26]={0};
	int bookbelong[26][999]={0};
	int everynum[26]={0};
	int t=0;
    while(k--)
	{
		cin>>book>>writer;
		int str=strlen(writer);
	    for(int i=0;i<str;i++)

		{	
			int flag=writer[i]-'A';
			counter[flag]++;
		    bookbelong[flag][everynum[flag]++]=book;  
	}
	}
	int max=counter[0];
	int maxnum=0;
	for(int i=0;i<26;i++)
	{
		if(counter[i]>max)
	{
		maxnum=i;
		max=counter[i];
	}}
char writerbest;
writerbest='A'+maxnum;
cout<<writerbest<<endl<<everynum[maxnum]<<endl;
for(int i=0;i<everynum[maxnum];i++)
	cout<< bookbelong[maxnum][i]<<endl;

	




	return 0;
}

