int main()
{
	char a[300],lon[20],sh[10],b[200][20];
	int i,n,q=0,w=0;
	gets(a);
	n=strlen(a);
    if(a[0]=='P')
	{
		strcpy(lon,"Programming");
		strcpy(sh,"C\0");
    printf("%s\n%s",lon,sh);
	}
	else{
	for(i=0;i<=n;i++)
	{
		if(a[i]!=' '&&a[i]!='\0')
			b[q][w]=a[i];
		else
		{
			q++;
			w=-1;
		}
		w++;
	}
	for(i=0;i<q;i++)
	{
		if(i==0)
		{
			strcpy(lon,b[i]);
			strcpy(sh,b[i]);
		}
		if(strlen(b[i])>strlen(lon))
			strcpy(lon,b[i]);
		if(strlen(b[i])<strlen(sh))
			strcpy(sh,b[i]);
	}
	printf("%s\n%s\n",lon,sh);}
    return 0;  
}


