void main()
{
	int n, i, j, ta, tb, t;
	char a[50][100]={""}, b[50][100]={""}, blank[3];

	scanf("%d\n", &n);
	for(i=0; i<n; i++)
	{
		gets(a[i]);
		gets(b[i]);
		gets(blank);
	}


	for(i=0; i<n; i++)
	{
	    ta = 0;
	    tb = 0;
		for(j=0; a[i][j]!='\0'; j++)
			ta++;
		for(j=0; b[i][j]!='\0'; j++)
			tb++;
		for(j=tb-1; j>=0; j--)
		{
			if(a[i][ta-tb+j]<b[i][j])
			{
				a[i][ta-tb+j] = a[i][ta-tb+j]+10-b[i][j]+48;
				for(t=ta-tb+j-1; t>=0; t--)
				{
					if(a[i][t]>48)
					{
						a[i][t]--;
						break;
					}
					else
					{
						a[i][t] = 57;
					}
				}
				
			}
			else
				a[i][ta-tb+j] = a[i][ta-tb+j]-b[i][j]+48;

		}
	}

	for(i=0; i<n; i++)
	{
		puts(a[i]);
	}

}