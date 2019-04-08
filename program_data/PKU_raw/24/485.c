void main()
{
	char a[1000],b[100][100]={""},longstr[100]={""},shortstr[100]={""};
	int i,k=0,j=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		
		b[k][j]=a[i];
		j++;
		if(a[i]==32)
		{
			b[k][j-1]='\0';
			k=k+1;
			j=0;
			
		}
	}
	strcpy(longstr,b[0]);
	strcpy(shortstr,b[0]);
	for(i=0;i<=k;i++)
	{
		
		if(strlen(b[i])>strlen(longstr))
			strcpy(longstr,b[i]);
		if(strlen(b[i])<strlen(shortstr))
			strcpy(shortstr,b[i]);
	}
	printf("%s\n%s\n",longstr,shortstr);
}
