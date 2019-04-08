int main()
{
	int i,j,k,p,m;
	char a[200],b[200],c[200];
	i=0;
	while(gets(a))
	{
		puts(a);
		k=0;
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='(')
				b[i]='$';
			else if(a[i]==')')
				b[i]='?';
			else
				b[i]=' ';
		}
		b[strlen(a)]='\0';
		c[strlen(a)]='\0';
		for(i=0;i<strlen(a);i++)
		{
			c[i]=b[i];
		}
		for(p=0;p<strlen(a);p++)
		{
			k=0;
		for(i=0;i<strlen(a);i++)
		{
			if(b[i]==' ')
				continue;
			else if(b[i]=='$')
			{
				k++;
				for(j=i+1;j<strlen(a);j++)
				{
					if(b[j]==' ')
						continue;
					else if(b[j]=='?')
					{
						b[i]=' ';
						b[j]=' ';
						c[i]=' ';
						c[j]=' ';
						break;
					}
					else if(b[j]=='$')
						break;
				}
			}
			else if(b[i]=='?'&&k==0)
				c[i]='?';
		}
		}
		puts(c);
		continue;
	}
	return 0;
}
