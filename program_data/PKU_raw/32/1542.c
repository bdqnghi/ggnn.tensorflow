void jian(char a[100],char b[100])
{
	int m,n,i,t=0;
	n=strlen(a);
	m=strlen(b);
	for (i=0;i<=m-1;i++)
	{
			if (a[n-i-1]>=b[m-i-1]+t)
			{
				a[n-i-1]=a[n-i-1]-b[m-i-1]-t+48;
				t=0;
			}
			else{
				a[n-i-1]=a[n-i-1]+10-b[m-i-1]+48-t;
				t=1;
			}
	}
	for (i=m;i<=n-1;i++)
	{
		if (a[n-i-1]>=t+48)
			{
				a[n-i-1]=a[n-i-1]-t;
			break;
			}
			else{
				a[n-i-1]=a[n-i-1]+10-t;
				t=1;
			}
	}
	for (i=0;i<=n-1;i++)
	{
		if(a[i]=='0')
		{
			a[i]=0;
		}
		else{break;}
	}
}

		 void main()
{
	int n,i,j;
	char a[100][100]={0},b[100][100]={0},c[10];
	scanf("%d",&n);
	gets(c);
	for (i=0;i<=n-1;i++)
	{
		gets(a[i]);
		gets(b[i]);
		gets(c);
		jian(a[i],b[i]);
	}
	for (i=0;i<=n-1;i++)
	{
		for(j=0;j<=99;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%c",a[i][j]);
			}
		}
		printf("\n");
	}
	
}
