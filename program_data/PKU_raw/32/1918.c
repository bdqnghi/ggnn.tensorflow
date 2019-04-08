
int main()
{
	int n,i,l,e;
	char a[101],b[101];
	int c[101],d[101];//??????
	cin>>n;
	while(n--)
	{
		int t;
		cin>>a>>b;
		for(i=0;i<=(strlen(a)-1)/2;i++)
		{
			t=a[i];
			a[i]=a[strlen(a)-1-i];
			a[strlen(a)-1-i]=t;
		}
		for(i=0;i<=(strlen(b)-1)/2;i++)
			{
				t=b[i];
				b[i]=b[strlen(b)-1-i];
				b[strlen(b)-1-i]=t;
			}//?????

		/*		strrev(a);
				strrev(b);????wtf???????????????
		 */
		for(i=0;i<(int)strlen(a);i++)//??????
			c[i]=a[i]-48;
		for(i=0;i<(int)strlen(b);i++)
			d[i]=b[i]-48;
		for(i=0;i<(int)strlen(b);i++)//???
			c[i]-=d[i];
		for(i=0;i<(int)strlen(a);i++)//??
			if(c[i]<0)
			{
				c[i]+=10;
				c[i+1]--;
			}
		l=0,e=0;
		for(i=(int)strlen(a)-1;i>=0;i--)//????
		{
			if((c[i]==0)&&(e==0))
				continue;
			l++;
			e=1;
		}
		if(l==0)
			l++;
		for(i=l-1;i>=0;i--)//??
			cout<<c[i];
		cout<<endl;
	}
	return 0;
}
