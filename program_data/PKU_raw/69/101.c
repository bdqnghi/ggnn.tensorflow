int main()
{
	char inl[200],ink[200];
	int a[200],b[200],c[200],out[200];
	int len1,len2,i,j,len=1;
	cin>>inl;
	cin>>ink;
	memset(a,0,sizeof a);
	memset(b,0,sizeof b);
	memset(c,0,sizeof c);
	memset(out,0,sizeof out);
	len1=strlen(inl);
	len2=strlen(ink);
	j=0;
	for(i=len1-1;i>=0;i--)
	{
		a[j]=inl[i]-48;
		j+=1;
	}
	j=0;
	for(i=len2-1;i>=0;i--)
	{
		b[j]=ink[i]-48;
		j+=1;
	}
	for(i=0;i<200;i++)
	{
		if(a[i]+b[i]+c[i]>=10)
		{
			c[i+1]+=1;
			out[i]=(c[i]+a[i]+b[i])%10;
		}
		else
		{
			out[i]=c[i]+a[i]+b[i];
		}
	}
	for(i=199;i>=0;i--)
		if(out[i]!=0)
		{
			len=i+1;
			break;
		}
	for(i=len-1;i>=0;i--)
		cout<<out[i];
	return 0;
}