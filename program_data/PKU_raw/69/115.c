int main()
{
	char a[210]={0},b[210]={0};
	int len_a,len_b,c[210]={0},d[210]={0},i,j,max;
	cin>>a>>b;
	len_a=strlen(a);
	len_b=strlen(b);
	j=0;
	for(i=len_a-1;i>=0;i--)
		c[j++]=a[i]-'0';
	j=0;
	for(i=len_b-1;i>=0;i--)
		d[j++]=b[i]-'0';
	max=(len_a>len_b)?len_a:len_b;
	for(i=0;i<max;i++)
	{
		c[i]+=d[i];
		if(c[i]>9)
		{
			c[i+1]++;
			c[i]-=10;
		}
	}
	for(i=max+1;i>=0;i--)
		if(c[i]!=0)
			break;
	if(i==-1)cout<<c[0];
	for(j=i;j>=0;j--)
		cout<<c[j];
	return 0;
}