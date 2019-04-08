void main()
{
	int n, i, j, la, lb, k;
	char a[100][100], b[100][100], c[100][100]={'\0'};
	scanf("%d\n", &n);
	gets(a[0]);
	gets(b[0]);
	for(i=1; i<n; i++)
	{
		scanf("\n");
		gets(a[i]);
		gets(b[i]);
	}
	for(i=0; i<n; i++)
	{
		la=strlen(a[i]);
		lb=strlen(b[i]);
		for(j=la-1; j>=la-lb; j--)
		{
			if(a[i][j]>=b[i][j-la+lb])
				a[i][j]=a[i][j]-b[i][j-la+lb]+48;
			else
			{
				a[i][j]=58+a[i][j]-b[i][j-la+lb];
				if(a[i][j-1]>'0')
					a[i][j-1]--;
				else
				{
					k=j;
					while(a[i][k-1]=='0')
					{
						a[i][k-1]='9';
						k--;
					}
					a[i][k-1]--;
				}
			}
		}
		k=0;
		for(j=0; a[i][j]!='\0'; j++)
			if(a[i][j]!='0') break;
		for(j=j; a[i][j]!='\0'; j++)
		{
			c[i][k]=a[i][j];
			k++;
		}
		puts(c[i]);
	}
}