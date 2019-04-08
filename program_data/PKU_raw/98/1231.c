int main()
{
	char word[500][40];
	int n,i,l[500],length=80;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>word[i];
		l[i]=strlen(word[i]);
	}
	cout<<word[0];
	length=length-l[0];
	for(i=1;i<n;i++)
	{
		if(l[i]<length)
		{
			cout<<" "<<word[i];
			length=length-l[i]-1;
		}
		else
		{
			cout<<endl;
			length=80;
			cout<<word[i];
			length=length-l[i];
		}
	}
	return 0;
}
