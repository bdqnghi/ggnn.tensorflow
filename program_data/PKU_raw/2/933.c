struct{
	int location[1001];
	int num;
	int sum;
}ans[27];
int main()
{
	int n,value=-1,order,m;
	char s[28];
	cin>>n;
	for(int i=1;i<=26;i++)
	{
		ans[i].num=ans[i].sum=0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		cin>>s;
		for(int j=0;j<strlen(s);j++)
		{
			ans[s[j]-'A'+1].num++;
			ans[s[j]-'A'+1].sum++;
			ans[s[j]-'A'+1].location[ans[s[j]-'A'+1].num]=m;
		}
	}
	for(int i=1;i<=26;i++)
	if(ans[i].sum>value)
	{
		value=ans[i].sum;
		order=i;
	}
	cout<<(char)(order+'A'-1)<<endl;
	cout<<ans[order].num<<endl;
	for(int i=1;i<=ans[order].num;i++)
		cout<<ans[order].location[i]<<endl;
		return 0;
}
