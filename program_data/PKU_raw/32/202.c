void main()
{
	int n,i,j,lena,lenb,t,h;
	char a[101],b[101],c[101],d[101];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s\n%s",a,b);
		lena=strlen(a);
		lenb=strlen(b);
		for (j=0;j<lena;j++)
		{
			c[j]=a[lena-j-1];
		}
		for (j=0;j<lenb;j++)
		{
			d[j]=b[lenb-j-1];
		}
		for (j=0;j<lenb;j++)
		{
			if (c[j]<d[j])
			{
				c[j]=c[j]+10-d[j]+'0';
				t=j;
				for (;c[++t]<'0';)
				{
					c[t]='9';
				}
				c[t]--;
			}
			else c[j]=c[j]-d[j]+'0';
			
		}
		for (h=lena-1;h>0;h--)
		{
			if (c[h]!='0') break;
		}
		for (;h>=0;h--)
		{
			printf("%d",c[h]-'0');
		}
		printf("\n");
	}
}