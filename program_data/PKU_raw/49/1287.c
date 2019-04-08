int main()
{
	char a[600];
	cin>>a;
	int l;
	l=strlen(a);
	int i,j,k,m;
	for(i=1;i<=l/2;i++)
		for(j=i;j<=l-i;j++)
		{
			m=0;
			for(k=i;k>0;k--)
			{
				if(a[j+k-1]==a[j-k])
					m=m+1;
			}
			if(m==i)
			{
				for(k=j-i;k<=j+i-1;k++)
					cout<<a[k];
				cout<<endl;
			}
		}
	return 0;
}

