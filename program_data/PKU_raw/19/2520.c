int main()
{
	char s[100],a[100],b[100],c[100][100];
	int i,len,n=0,j=0,z=0,len1,len3,d;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			c[n][j]=s[i];
			j++;
		}else{
			c[n][j]='\0';
			n++;
			j=0;
		}
	}
	c[n][j]='\0';
	len1=strlen(a);
	for(i=0;i<=n;i++)
	{
		z=0;
		d=0;
		len3=strlen(c[i]);
		for(j=0;j<len3&&j<len1;j++)
		{
			if(c[i][j]==a[z]){
				d++;
				z++;
			}
		}
		    if(d==len1){
			    strcpy(c[i],b);
			}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",c[i]);
	}
	printf("%s",c[n]);
	return 0;
}
