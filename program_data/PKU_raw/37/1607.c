int main()
{
	int t,i,j,k;
	int record[26]={0};
	char s[100001]={'\0'};
	cin>>t;
	for(i=0;i<t;i++)
	{
		k=0;
		cin>>s;
		for(j=0;j<strlen(s);j++)
			record[s[j]-'a']++;
		for(j=0;j<strlen(s);j++)
			if(record[s[j]-'a']==1)
				{cout<<s[j]<<endl;k=1;break;}
		if(k==0)
			cout<<"no"<<endl;
		for(j=0;j<strlen(s);j++)
			s[j]=0;
		for(j=0;j<26;j++)
			record[j]=0;
	}
		return 0;
}
