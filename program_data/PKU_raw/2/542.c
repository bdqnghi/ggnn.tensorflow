struct a
{
	int number;
	char author[26];
}b[100];
int main()
{
	int L[26]={0};
	int n=0;
	int max=0;
	int p=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i].number;
		cin>>b[i].author;
		for(int j=0;b[i].author[j]!='\0';j++)
			L[b[i].author[j]-'A']++;
	}
	for(int i=0;i<26;i++)
		if(max<L[i])
		{
			p=i;
			max=L[i];
		}
	cout<<(char)(p+'A')<<endl;
	cout<<max<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;b[i].author[j]!='\0';j++)
		{
			if(b[i].author[j]-p=='A')
			{
				cout<<b[i].number<<endl;
				break;
			}
		}
	}
	return 0;
}