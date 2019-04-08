int main()
{
	char str[101],nstr[101][101],n[101]={'\0'},k[3]={' ','\0'},s[3]={'\0'};
	char a[101],b[101];
	int i,t=0,m=0;
	gets(str);
	gets(a);
	gets(b);
	for(t=0;;t++)
	{
		for(i=0;;i++)
		{
		   if(str[m]!=' '&& str!='\0')
		   {
			  nstr[t][i]=str[m];
		   }
		   if(str[m]==' '||str[m]=='\0')
		   {
			  nstr[t][i]='\0';
			  break;
		   }
		   m++;
		}
        if(str[m]=='\0') break; 
		m++;
	}
	for(i=0;i<=t;i++)
	{
		if(strcmp(nstr[i],a)==0)
		{
              strcat(n,b);
		}
		if(strcmp(nstr[i],a)!=0)
		{
			strcat(n,nstr[i]);
		}
		if(i!=t)
		{
			strcat(n,k);
		}
	}
    puts(n);
	return 0;
}

