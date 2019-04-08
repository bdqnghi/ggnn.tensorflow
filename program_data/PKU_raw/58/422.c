

//a ???97,z:122;A65;Z90;???95;0,48;9,57

int main()
{
	int n;
	cin>>n;
	int b[100];
	int j=0;
	int k=0;
	cin.get();
	for (j=1;j<=n;j++)
	{
	

	char c;
	int i=0;
	char a[100];
	while(cin.get(c))
	{
		if (c=='\n')
			break;
		a[i]=c;
		i=i+1;

	}
	int asc;
	asc=a[0];
	if (asc==95||(asc>=97&&asc<=122)||(asc>=65&&asc<=90))
	{
		int count=0;
		for (k=1;k<=i-1;k++)
		{
			int lin;
			lin=a[k];
			if ((a[k]<48)||(a[k]>57&&a[k]<65)||(a[k]>90&&a[k]<95)||(a[k]>122)||(a[k]>95&&a[k]<97))
				count=1;
		}
		if (count==0) b[j]=1; else b[j]=0;
		
	}
	else
		b[j]=0;

	}
	for (j=1;j<=n;j++)
		cout<<b[j]<<endl;


	return 0;

}


