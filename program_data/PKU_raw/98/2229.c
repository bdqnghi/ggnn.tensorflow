int main()
{
	int n;
	char s[1000][50];
	int len[1000]={0};
	int sum=0;
//	int breakpoint[1000];
	int i;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		len[i]=strlen(s[i]);
	}
    for(i=0;i<n;i++)
	{
		if(i==n-1)
		{	
			cout<<s[i]<<endl;
			break;
		}
		cout<<s[i]<<" ";
		sum=sum+len[i]+1;
		if((sum+len[i+1]<=80)&&(sum+len[i+1]+1+len[i+2]>80))
		{
			i=i+1;
			cout<<s[i]<<endl;
			sum=0;
		}
	}
	return 0;
}