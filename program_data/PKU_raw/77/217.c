void line(char a[100],int b)
{
	int i,j;
	for(i=0;i<b;i++)
	{
		if(a[i]!=a[0])
		{
			for(j=i;j>=0;j--)
			{
				if(a[j]!=a[i]&&a[j]==a[0])
				{
					cout<<j<<' '<<i<<endl;
					a[j]=a[i]=0;break;
				}
				
			}}
		
	}}




int main()
{
	char a[100];
	cin>>a;
	int n;
	n=strlen(a);
	line (a,n);
	return 0;
}

