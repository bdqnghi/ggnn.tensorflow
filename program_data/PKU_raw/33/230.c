int main()
{
	char a[10000][500];
	int i,n,j,m[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		m[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m[i];j++)
		{
			if(a[i][j]=='A')
			{
				a[i][j]='T';
			}
			else 
			{
				if(a[i][j]=='T')
				{
					a[i][j]='A';
				}
				else
				{
					if(a[i][j]=='C')
					{
						a[i][j]='G';
					}
					else
					{
						if(a[i][j]=='G')
						{
							a[i][j]='C';
						}
					}
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}

