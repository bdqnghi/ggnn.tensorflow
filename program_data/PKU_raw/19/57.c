
void main()
{
	int m,n,i,j,l,sum=0,k=0;
	char s[100],a[10],b[10],c[10];
	gets(s);
	gets(a);
	gets(b);
	n=strlen(s);
	m=strlen(a);
	l=strlen(b);
	for (i=0;i<=n-1;)
	{
		if ((s[i]==a[0]&&i==0)||(s[i]==a[0]&&s[i-1]==' '))
		{
			j=0;
			while ((s[i+j]!=' ')&&((i+j)!=n))
			{
				c[j]=s[i+j];
				j++;
			}
			c[j]='\0';
			if (strcmp(c,a)==0)
			{
				printf("%s ",b);
				i=i+m+1;		
			}
			else 
			{
				printf("%c",s[i]);
				i++;
			}
		}
		else 
		{
			printf("%c",s[i]);
			i++;
		}
	    
	}
	

}