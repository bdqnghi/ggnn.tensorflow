int main()
{
	char s[100],a[100],b[100],d[100][100];
	int i,j,w,m,k=0;
	gets(s);
	gets(a);
	gets(b);
	w=strlen(s);
	for(i=0,j=0;i<w+1;j++,i++)
	{
		if(s[i]!=' '&&s[i]!=0)
		{
			d[k][j]=s[i];
		}
		else
		{
			d[k][j]=0;
			k+=1;
			j=-1;
		}	
	}
    for(i=0;i<k;i++)
	{
		if(strcmp(d[i],a)==0)
		{
			strcpy(d[i],b);
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%s ",d[i]);
	}
	printf("%s",d[k-1]);
	return 0;
}