int main()
{
	int t,i,j,b,min;
	char c;
	cin>>t;
	cin.get();
	for(i=0;i<t;i++)
	{
		int a[26]={0},d[26]={0};
		char ch[100000]={'\0'};
		cin.getline(ch,100000);	
		j=0;
		while(ch[j]!='\0')
		{
			c=ch[j]-'a';
			b=c;
			a[b]++;
			if(a[b]==1)
				d[b]=j;
			j++;
		}
		min=100000;
		for(j=0;j<26;j++)
			if(a[j]==1&&min>d[j])
				min=d[j];
		if(min!=100000)
			cout<<ch[min];
		else cout<<"no";
		cout<<endl;
	}
	return 0;
}