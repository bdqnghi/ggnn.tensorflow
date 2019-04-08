int main()
{
	int n,sum,len[1000];
	char word[1000][41];
	char *p;               //?????????
	cin>>n;
	sum=0;
	for ( int i=0; i<n;i++ )
	{
		cin>>word[i];
		len[i]=strlen(word[i])+1;
	}
	for ( int i=0; i<n-1;i++ )
	{
		p=word[i];            //????????????
		if ( sum+len[i]<=81)
		{
			if ( sum+len[i]+len[i+1]>81) //????????
			{cout<<word[i];
			sum+=len[i];
			}
			else              //??????
				{
					cout<<word[i]<<' ';
				sum+=len[i];
				}
		}
		else
		{
			cout<<endl;
			cout<<word[i]<<' ';
			sum=len[i];
		}
	}
	cout<<word[n-1]<<endl;
	return 0;
}
