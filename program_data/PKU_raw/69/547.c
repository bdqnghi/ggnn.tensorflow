
int main()
{
	char a[251],b[251];
	int c[251]={0},d[251]={0};
	cin>>a>>b;
	int m=strlen(a),n=strlen(b);
	for(int i=m-1,j=0;i>=0;i--,j++)
	{
		c[j]=a[i]-'0';
	}
	for(int k=n-1,j=0;k>=0;k--,j++)
	{
		d[j]=b[k]-'0';
	}
	for(int i=0;i<251;i++)
	{
		if(c[i]+d[i]<10)
			c[i]+=d[i];
		else
		{
			c[i]=c[i]+d[i]-10;
			c[i+1]++;
		}
	}
	int i=250;
	for(;c[i]==0&&i>=0;i--);
	if(i==-1)
	{
		cout<<0;
	}
	else
	{
	for(;i>=0;i--)
		cout<<c[i];
	}
	return 0;
}