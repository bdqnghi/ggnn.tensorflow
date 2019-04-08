int main()
{
	int n,i,j=0,k=0,l,m,c[101]={0},d[101]={0};
	char a[101],b[101];
	cin >> n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<101;j++)
		{
			c[j]=0;
			d[j]=0;
		}	
		cin.get();
		cin.getline(a,101);
		cin.getline(b,101);
		l=strlen(a);
		m=strlen(b);
		for(j = l-1, k = 0;j >= 0;j--)
			c[k++]=a[j]-'0';
		for(j = m-1, k = 0;j >= 0;j--)
			d[k++]=b[j]-'0';
		for(j=0;j<l;j++)
		{
			c[j]-=d[j];
			if(c[j]<0)
			{
				c[j]+=10;
				c[j+1]-=1;
			}
		}
		if(c[l-1]==0)
		{
			for(j=l-2;j>=0;j--)
				cout << c[j];
			cout << endl;
		}
		else
		{
			for(j=l-1;j>=0;j--)
				cout << c[j];
			cout << endl;
		}
	}
	return 0;
}
		