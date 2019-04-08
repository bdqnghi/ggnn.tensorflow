int main()
{
	int i,n,c,d,e,f,g,k,j,l,b[100];
	scanf("%d",&n);
	char a[1000][150],h[1000][150];
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
		e=0;
		for(j=0;j<b[i];j++)
		{
			if(a[i][j]=='(')
			{
				h[i][j]='$';
				e++;
			}
			if(a[i][j]==')')
			{
				h[i][j]='?';
			}
			if(a[i][j]!='('&&a[i][j]!=')')
				h[i][j]=' ';
		}
		for(l=0;l<e;l++)
		{
			for(j=0;j<b[i];j++)
			{
				c=f=d=-1;
				if(h[i][j]=='$')
				{
					c=j;
					g=c;
					for(g=c;g<b[i];g++)
					{
						if(h[i][g]=='?')
						{
							f=g;break;
						}
					}
					for(k=f-1;k>=c;k--)
					{
						if(h[i][k]=='$')
						{
							d=k;
							break;
						}
					}
					if(d!=-1&&f!=-1)
					{
						h[i][d]=' ';
						h[i][f]=' ';
					}
					break;
				}
			}
		}
		for(j=0;j<b[i];j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
		for(j=0;j<b[i];j++)
		{
			printf("%c",h[i][j]);
		}
		printf("\n");
		
	}	
	return 0;
}