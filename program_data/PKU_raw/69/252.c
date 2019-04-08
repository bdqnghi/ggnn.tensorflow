int main()
{
	char a[251],b[252];
	int c[251]={0},d[251]={0},s[251]={0},len1,len2,j=0,i;
	cin>>a;
	cin>>b;
	len1=strlen(a);
	len2=strlen(b);
	for(i=len1-1;i>=0;i--)
	{
		c[j]=a[i]-'0';
		j++;
	}
	j=0;
	for(i=len2-1;i>=0;i--)
	{
		d[j]=b[i]-'0';
		j++;
	}
	for(i=0;i<len1||i<len2;i++)
	{
		s[i]=c[i]+d[i]+s[i];
		if(s[i]>=10)
		{
			s[i+1]++;
			s[i]=s[i]-10;
		}
	}
	i=250;
	while(s[i]==0&&i>0)
	{
		i--;
	}
	for(j=i;j>=0;j--)
		cout<<s[j];
	cout<<endl;
	return 0;
}

	
