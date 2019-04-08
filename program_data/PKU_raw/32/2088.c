int main()
{
	char a[100],b[100];
	int n,i,j,k;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a;
		cin>>b;
		for (j=strlen(a)-1,k=strlen(b)-1;k>=0;j--,k--)
		{
			if (a[j]>=b[k])
				a[j]=a[j]-b[k]+'0';
			else
			{
				a[j]=a[j]+10-b[k]+'0';
				a[j-1]--;
			}
		}
		for (j=0;j<=strlen(a)-1;j++)
			if (a[j]!='0')
			{
				for (k=j;k<=strlen(a)-1;k++)
				cout<<a[k];
				break;
			}
		if (j==strlen(a)&&a[j-1]=='0')
			cout<<"0";
		cout<<endl;
	}
	return 0;
}