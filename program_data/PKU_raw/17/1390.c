int main()
{
	int n,i,j,k,l;
	char a[100][120];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		puts(a[i]);
		k=strlen(a[i]);
		for(j=0;j<k;j++)
		{

			if(a[i][j]==')')
			{
				a[i][j]='?';
			}
			if(a[i][j]=='(')
			{
				a[i][j]='$';
			}
		}
        for(j=0;j<k;j++)
		{
			if(a[i][j]!='?'&&a[i][j]!='$')
			{
				a[i][j]=' ';
			}
		}
		for(j=0;j<k;j++)
		{
			if(a[i][j]=='?')
			{
				for(l=j;l>=0;l--)
				{
					if(a[i][l]=='$')
					{
						a[i][j]=' ';
						a[i][l]=' ';
					    break;
					}
				}
			}
		}
		for(j=0;j<k;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");	
	}
	return 0;
}