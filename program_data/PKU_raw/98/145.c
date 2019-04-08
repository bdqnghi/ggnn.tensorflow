int main()
{
	int n=0,i=0,len=0,count=0;
	char word[1000][41];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>word[i];
	}
	for(;count<n;)
	{
		len+=strlen(word[count]);
		cout<<word[count++];
		while(len+strlen(word[count])+1<=80)
		{
			if(count>=n)
				break;
			else
			{
				len+=strlen(word[count])+1;
				cout<<" "<<word[count++];
			}
		}
		len=0;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

