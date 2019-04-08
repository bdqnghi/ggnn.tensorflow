int main ()
{
	char a[81],b[81];
	cin.getline(a,80);
    cin.getline(b,80);
	int i,n,c=0;
	n=strlen(a)<=strlen(b)?strlen(a):strlen(b);

	for (i=0;i<=n;i++)
	{
		if (a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		if (b[i]>=65&&b[i]<=90)
		{
			b[i]=b[i]+32;
		}
		if (a[i]==b[i])
		{
			continue;
		}
		else if (a[i]>b[i])
		{
			cout<<'>';
			c=1;
			break;
		}
		else
		{
			cout<<'<';
			c=1;
			break;
		}
	}
	if (c==0)
	{
		cout<<'=';
	}

	


}

