int main()
{
	int n,i,l,m,j,k,p,q=0;
	char a[100][100],b[100][100],c[100],d[100],e[100];
	scanf("%d\n",&n);
	for(i=0;i<=n-2;i++)
	{
		gets(a[i]);
		gets(b[i]);
        scanf("\n");

	}
	gets(a[n-1]);
	gets(b[n-1]);
	for(i=0;i<=n-1;i++)
	{
		l=strlen(a[i]);
		m=strlen(b[i]);
		strcpy(c,b[i]);
		for(j=0;j<=l-1;j++)
		{
			if(j<=l-m-1)
				b[i][j]='0';
			if(j>l-m-1)
				b[i][j]=c[j-l+m];
		}
		for(j=l-1;j>=0;j--)
		{
			if(a[i][j]<b[i][j])
			{
				d[j]=a[i][j]-b[i][j]+10+48;
				q=0;
			    for(p=1;;p++)
				{   
					if(a[i][j-p]=='0')
					{
						q=q+1;
						a[i][j-p]='9';
					}
					if(a[i][j-p]!='0')
						break;
				}
				a[i][j-q-1]=a[i][j-q-1]-1;

			}
			if(a[i][j]>=b[i][j])
				d[j]=a[i][j]-b[i][j]+48;
		}
        for(j=0;j<=l-1;j++)
          if(d[j]!='0')
		  {
			  k=j;
			  break;
		  }
		  for(j=k;j<=l-1;j++)
			  printf("%c",d[j]);
		  if(i!=n-1)
		  printf("\n");
          for(j=0;j<=99;j++)
			  d[j]='0';
	}
	return 0;
}