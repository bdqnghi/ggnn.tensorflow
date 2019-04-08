int main()
{
	int i,j,k,n;
	char a[501];
	cin.getline(a,501);
	n=strlen(a);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			for(k=0;k<=i/2;k++)
			{
				if(a[j+k]!=a[j+i-1-k])
					break;
			}
			if(k==i/2+1)
			{
				for(k=j;k<=j+i-1;k++)
					cout<<a[k];
				cout<<endl;
			}
		}
	}
	return 0;
}