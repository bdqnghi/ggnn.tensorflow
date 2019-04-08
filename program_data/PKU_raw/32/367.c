int main()
{
	char a[100],b[100],c[100],d[100],e[100];
	int n,j,p,q,k,i;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%s",a);
		p=strlen(a);
		for(i=0;i<p;i++)
		{
			c[p-1-i]=a[i];
		}
		scanf("%s",b);
		q=strlen(b);
		for(i=0;i<q;i++)
		{
			d[q-1-i]=b[i];
		}
		for(i=q;i<p;i++)
		{
			d[i]='0';
		}
		for(i=0;i<p;i++)
		{
			if(c[i]>=d[i])
				e[i]=c[i]-d[i]+48;
			else
			{
				e[i]=10+c[i]-d[i]+48;
				for(k=i+1;k<p;k++)
				{
					if(k!=0)
					{
						c[k]=c[k]-1;
						break;
                                    }
					    
				}
                      }
		}
		for(i=p-1;i>=0;i--)
		{
			if(e[i]!='0')
			{
				break;
			}
		}
		for(k=i;k>=0;k--)
		{
			printf("%c",e[k]);
		}
		printf("\n");
    }
	return 0;
}
