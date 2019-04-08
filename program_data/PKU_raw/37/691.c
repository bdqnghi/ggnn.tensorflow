int main()
{
	int t,xh;
	cin>>t;
	for(xh=1;xh<=t;xh++){
		char s[100005];
	int i ,j ;
	int p[26]={0};
	int count[26]={0};
	cin>>s;
	for(i=0;i<26;i++)
	{
		for(j=0;j<100001;j++)
		{
			if(s[j]=='0'+49+i)
				{
					p[i]=j;
					
					break;
				}
		}
	}
	for(i=0;i<100001;i++)
	{
		if(s[i]=='\0')
			break;
		count[s[i]-97]++;
	}
	char z;
	int flag=0;
	for(i=0;i<26;i++)
	{
		
		if(count[i]==1&&flag==0)
		{
			   z=s[p[i]];
			   flag=1;
		}
		if(count[i]==1&&flag==1)
		{
			if(p[i]<p[z-97])
				z=s[p[i]];
		}
	}
	if(flag==0)

		cout<<"no"<<endl;
	else
		cout<<z<<endl;}

	return 0;
}