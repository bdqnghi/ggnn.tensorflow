

int main()
{
	int n,b[1000],d[1000];
	cin>>n;
	/*char a[1000][100];*/
	char a[200][100];
	int i,j,k,lc,m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		b[i]=strlen(a[i]);}
	/*cin.getline(c,9999);
	lc=strlen(c);
	b[0]=-1;
	j=1;*/
	/*for(i=0;i<lc;i++)
	{
		if(c[i]==' ')
		{
			b[j]=i;m=0;
			for(k=b[j-1]+1;k<b[j];k++)
			{
				a[j-1][m]=c[k];m=m+1;}
			a[j-1][m]='\0';
			j=j+1;
		}
		if(j==n)
			break;
	}
	m=0;
	for(k=b[j-1]+1;k<lc;k++)
	{
		a[n-1][m]=c[k];m=m+1;
	}
	a[n-1][m]='\0';
	for(i=0;i<n;i++)
		d[i]=strlen(a[i]);*/

	/*for(i=0;i<n-1;i++)
	{
		for(j=0;;j++)
			cin>>a[i][j];
		b[i]=j;
		a[i][j+1]='\0';
	}
	cin.getline(a[n-1],100);
	b[n-1]=strlen(a[n-1]);*/
	int l;

	l=b[0];
	cout<<a[0];
	for(i=1;i<n-1;i++)
	{
		l=l+1+b[i];
		if(l>80)
		{
			cout<<endl;cout<<a[i];l=b[i];
		}
		else
		{
			cout<<' '<<a[i];
		}
	}
	l=l+1+b[n-1];
	if(l<=80)
		cout<<' '<<a[n-1];
	else
	{
		cout<<endl;
		cout<<a[n-1];}
	return 0;
		

}


