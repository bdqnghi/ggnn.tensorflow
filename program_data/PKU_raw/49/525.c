int main()
{
	char a[501]; int  i,j,k,t,m,n;
	cin>>a;
	t=strlen(a);
	for (k=1;k<=t-1;k++)
	{
		for (i=0;i<t-1;i++)
			if (i+k<t&&a[i]==a[i+k])
			{
				for (m=i,n=i+k;m<n;m++,n--)
					if (a[m]!=a[n]) break;
				if (m>=n)
				{for (j=i;j<=i+k;j++)
					cout<<a[j];
				cout<<endl;
				}
			}
	}
	return 0;
}
