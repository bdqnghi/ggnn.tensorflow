int main()
{
	int n,i,j,l,t;
	char word[50];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>word;
		l=strlen(word);
		if(word[l-3]=='i'&&word[l-2]=='n'&&word[l-1]=='g')l-=3;
		else if(word[l-2]=='e'&&word[l-1]=='r')l-=2;
		else if(word[l-2]=='l'&&word[l-1]=='y')l-=2;
		for(j=0;j<l;j++)
			cout<<word[j];
		cout<<endl;
	}
	return 0;
}