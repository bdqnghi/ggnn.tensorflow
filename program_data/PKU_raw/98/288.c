int main()
{
	int n,s=0;
	char word[500][50];
	int l[500];
	char *q;
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>word[i];
	}
	for(i=0;i<n;i++)
	{
		l[i]=0;
		q=word[i];
		while(*q!='\0')
		{
			l[i]++;
			q++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(s>0&&s+l[i]<=80)
			cout<<" "<<word[i];
		if(s+l[i]>80)
		{
			s=0;
			cout<<'\n';
		}
		if(s==0)
			cout<<word[i];
		s=s+l[i]+1;
	}
	return 0;
}