int main()
{
	char word[1000][20];
	int n,i,j,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>word[i];
	char(*p)[20]=word;
	for(i=0;i<n;i++)
	{
		sum=sum+strlen(*(p+i));
		if(sum<=80)
		{
			cout<<*(p+i);
			if((sum+strlen(*(p+i+1))+1)<=80 && i!=n-1)
			{	
				sum++;
				cout<<' ';
			}
			else
			{
				cout<<endl;
				sum=0;
			}

		}
		else
		{
			cout<<endl;
			cout<<*(p+i);
			sum=strlen(*(p+i));
		}
	
	}
	return 0;
}