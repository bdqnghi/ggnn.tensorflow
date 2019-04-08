
int main()
{
	char word[1000][40]={'\0'};
	int wordlen[1000]={0},i,n,sum=0;	//sum??????????
	cin>>n;
	cin.get();
	for (i=0;i<n;i++)
		cin>>word[i];						//???cin??????
	for (i=0;i<n;i++)
		wordlen[i]=strlen(word[i]);			//?????????
	cout<<word[0];
	sum=wordlen[0];
	for (i=1;i<n;i++)
	{
		if ((wordlen[i]+1+sum)<=80)
		{
			cout<<" "<<word[i];
			sum=sum+wordlen[i]+1;
		}
		else
		{
			cout<<endl;
			sum=wordlen[i];
			cout<<word[i];
		}
	}
	return 0;
}