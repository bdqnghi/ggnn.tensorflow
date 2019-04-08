void main()
{
	char s[100],c[100][100]={0},a[100],b[100]={0},e[100][100],f[100];
	int m,i,n=0,l=0,k=0,d[100]={0},j;
	gets(s);
	gets(a);
	gets(b);
	m=strlen(s);
	for(i=0;i<m;i++)
		if(s[i]==32)
          n++;
	for(i=0;i<=n;i++)
	{
       for(j=0;s[k]!=32;j++)
	   {
			   c[i][j]=s[k];
		       k++;
	   }
	   if(s[k]==32)
		   k++;
	}
	for(i=0;i<=n;i++)
		if(strcmp(c[i],a)==0)
		   strcpy(e[i],b);
		else
		   strcpy(e[i],c[i]);
    strcpy(f,e[0]);
	for(i=1;i<=n;i++)
	{
	    strcat(f," ");
	    strcat(f,e[i]);
	}
	printf("%s",f);
}