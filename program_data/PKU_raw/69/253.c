char a[1000],b[1000];
int c[1000],d[1000],result[1000];
int main()
{
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	memset(result,0,sizeof(result));
	cin>>a;
	cin>>b;
	int len1,len2,i,j=0;
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
		d[j]=b[i]-'0';j++;
	}
	for(i=0;i<len1||i<len2;i++)
	{
		result[i]=c[i]+d[i]+result[i];
		if(result[i]>=10)
		{
			result[i+1]++;
			result[i]=result[i]-10;
		}
	}
	i=999;
	while(result[i]==0&&i>=0)
		i--;
	if(i<0)
		cout<<"0"<<endl;
	else
	{
		for(j=i;j>=0;j--)
			cout<<result[j];
		cout<<endl;
	}
	return 0;
}








