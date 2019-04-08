int main()
{
	char a[2000],b[50],d[50];
	int i,k,len,leng=0,u=0,e,c,m=50;
	gets(a);
	len=strlen(a);
	for(i=0;i<=len;i++)
	{
		if(a[i]!=' '&&a[i]!=','&&a[i]!='\0')
		{
			leng=leng+1;
		}
		if(a[i]==' '||a[i]==','||a[i]=='\0')
		{
			c=leng;
			leng=0;
			if(c>u)
			{
				e=c;
				c=u;
				u=e;
				for(k=0;k<u;k++)
				{
					b[k]=a[i-u+k];
					b[u]='\0';
				}
			}
		}
	}
	printf("%s\n",b);
for(i=0;i<=len;i++)
	{
		if(a[i]!=' '&&a[i]!=','&&a[i]!='\0')
		{
			leng=leng+1;
		}
		if((a[i]==' '||a[i]==','||a[i]=='\0')&&a[i-1]!=' '&&a[i-1]!=',')
		{
			c=leng;
			leng=0;
			if(c<m)
			{
				e=c;
				c=m;
				m=e;
				for(k=0;k<m;k++)
				{
					d[k]=a[i-m+k];
					d[m]='\0';
				}
			}
		}
	}
	printf("%s\n",d);

				
	

	return 0;
			
}