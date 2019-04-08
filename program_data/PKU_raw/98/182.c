int len(char word[81])
{
	char *p;
	p=word;
	int i=0,count=0;
	for(i=0;i<81;i++)
	{
		if(*(p+i)==0)
			break;
		else
			count++;
	}
		return count;
}
int main()
{
	char word[81];
	memset(word,0,sizeof(word));
	int n=0,num=0;
	cin>>n;
	int i=0;
	scanf("%s", word);
	cout<<word;
	num=len(word)+1;
	for(i=2;i<=n;i++)
	{
		scanf("%s", word);
		if(len(word)+num>80)
		{
			cout<<endl;
			cout<<word;
			num=len(word)+1;
		}
		else
		{
			cout<<" "<<word;
			num=num+len(word)+1;
		}
	}
	return 0;
}