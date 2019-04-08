int main()
{
	int n,a[1000],s=0;
	cin>>n;
	char word[40],*q;
	cin>>word;
    q=word;
	while(*q!='\0')q++;
	a[1]=q-word;
	s=s+a[1]+1;
	cout<<word;
	for(int i=2;i<=n;i++)
	{
        char words[40],*p;
		cin>>words;
		p=words;
		while(*p!='\0')p++;
		a[i]=p-words;
		s=s+a[i]+1;
		if(s<=80)
		cout<<" "<<words;
		else
			{if(s==81)cout<<" "<<words;
			else
		{cout<<endl;
		cout<<words;
		s=a[i]+1;}}

	}
	return 0;
}
