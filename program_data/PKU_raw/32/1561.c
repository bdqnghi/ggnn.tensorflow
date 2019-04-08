void main()
{
	int i,j,n,p,q;
	char a[101],b[101],c[20][101],*s,d[5];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",a,b);
		gets(d);
		for(j=0;j<(p=strlen(a));j++)
		{
			if(j<(q=strlen(b)))
			{
				if(a[p-1-j]<b[q-j-1])
				{
					c[i][p-1-j]=10+a[p-1-j]-b[q-j-1]+'0';
					a[p-2-j]--;
				}
				else c[i][p-j-1]=a[p-1-j]-b[q-j-1]+'0';
			}
			else
			{
				if(a[p-1-j]<'0')
				{
					c[i][p-j-1]=10+a[p-1-j];
					a[p-j-2]--;
				}
				else c[i][p-j-1]=a[p-1-j];
			}
			c[i][p]='\0';

		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			if(c[i][j]!='0')
			{
				s=&c[i][j];break;
			}
		}
		printf("%s\n",s);
	}
}