int main()
{
	char s[1000],a[1000],b[1000],c[1000][1000]={0};
	int i,j,k=0,e,d,h,n=0,d1;
	gets(s);
	gets(a);
	gets(b);
	d=strlen(s);
	for(i=k;i<d;i++)
	{
		h=0;
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0'))
		{
			for(j=k;j<=i;j++)
			{
				c[n][h++]=s[j];
				
			}
			c[n][h]='\0';
			n+=1;
			k=i+2;
		}
	}
	e=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(a,c[i])==0)
		{
			strcpy(c[i],b);
			e=1;
		}
	}
	if(e==0)
	{
		printf("%s\n",s);
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			d1=strlen(c[i]);
			for(j=0;j<d1;j++)
			{
				printf("%c",c[i][j]);
			}
				printf("%c",' ');
		}
		printf("%s\n",c[n-1]);
	}
	return 0;
}
		