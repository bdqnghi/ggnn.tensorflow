int main() {
	int n,la,lb;
	char a[100],b[100];
	int a1[100],b1[100],c[100];
	cin>>n;
	while(n>0)
	{
		cin>>a>>b;
		la=strlen(a);
		lb=strlen(b);
		for(int i=la-1,j=1;i>=0;i--)
			a1[j++]=a[i]-'0';
		for(int i=lb-1,j=1;i>=0;i--)
					b1[j++]=b[i]-'0';
		for(int i=lb+1;i<=la;i++)
			b1[i]=0;
		int t=0;
		for(int i=1;i<=la;i++)
		{
			c[i]=a1[i]-b1[i]+t;
			if(c[i]<0)
			{
				c[i]=c[i]+10;
				t=-1;
			}
			else
				t=0;
		}
		for(int i=la;i>=1;i--)
			if(c[i]!=0)
			{
				la=i;
				break;
			}
		for(int i=la;i>=1;i--)
			cout<<c[i];
		cout<<endl;
		n--;
	}
		return 0;
}