int main()
{
	int i,j,n,x[1000],a[26],b,c,num=0;
	char s[1000][26];
	for(i=0;i<25;i++)
		a[i]=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>s[i];
		for(j=0;s[i][j]!='\0';j++)
			a[(int)s[i][j]-65]++;
	}
	b=a[0];
	c=0;
	for(i=1;i<26;i++)
		if(b<a[i])
		{
			b=a[i];
			c=i;
		}
	cout<<(char)(c+65)<<endl;
	for(i=0;i<n;i++)
		for(j=0;s[i][j]!='\0';j++)
			if(s[i][j]==(char)c+65)
				num++;
	cout<<num<<endl;
	for(i=0;i<n;i++)
		for(j=0;s[i][j]!='\0';j++)
			if(s[i][j]==(char)c+65)
			{
				cout<<x[i]<<endl;
				break;
			}
	return 0;
}