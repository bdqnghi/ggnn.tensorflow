int main()
{
        int n,i,j,k,l,tem;
	char a[100][1000],b[100][1000];
	int c[100][1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin.get();
		cin.get(a[i],900);
		cin.get();
		cin.get(b[i],900);
		cin.get();
		for(j=strlen(a[i])-1;j>=strlen(a[i])-strlen(b[i]);j--)
		{
			c[i][j]=a[i][j]-b[i][j-strlen(a[i])+strlen(b[i])];
			if(c[i][j]<0)
			{
				c[i][j]=c[i][j]+10;
				a[i][j-1]=a[i][j-1]-1;
			}
		}
		for(j>=strlen(a[i])-strlen(b[i])-1;j>=0;j--)
		{
			c[i][j]=a[i][j]-'0';
		}
		for(j=0;j<strlen(a[i]);j++)
		{
			if(c[i][j]!=0)
			{
				tem=j;
				break;
			}
		}
		for(j=tem;j<strlen(a[i]);j++)
		{
			cout<<c[i][j];
		}
		cout<<endl;
	}
}
