
int main()
{
	int n;
	char base[20000][300];
	int i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",base[i]);
		for (j=0;base[i][j]!=0;j++)
		{
			switch (base[i][j])
			{
			    case 'A':
					{
						base[i][j]='T';
						break;
					}
				case 'T':
					{
						base[i][j]='A';
						break;
					}
				case 'G':
					{
						base[i][j]='C';
						break;
					}
				case 'C':
					{
						base[i][j]='G';
						break;
					}
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%s\n",base[i]);
	}
	return 0;
}