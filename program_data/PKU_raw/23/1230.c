void main()
{
	char a[100],s[100][100],string[100];
	int i,j,m,word,k,n;
	gets(a);
	n=strlen(a);
	for(i=n;i<100;i++)
	a[i]='\0';
	m=1;
	for(i=0;a[i]!='\0';i++)                          /*??a????m*/
	{
		if(a[i]==' ')
			word=0;
		else if(word==0)
		{
			word=1;
			m++;
		}
	}
		j=0;
		i=0;
		k=0;     
		while(a[i]!='\0')                                        /*?a??????string*/
		{
			while(a[i]!=' ')
		{
			string[j]=a[i];
			i++;
			j++;
			if(a[i]=='\0')
				break;
		}
		string[j]='\0';
		strcpy(s[k],string);                     /*?string?????s[k]*/
			k++;
			j=0;i++;
	}
	for(k=m-1;k>0;k--)
			printf("%s ",s[k]); 
	       printf("%s",s[0]);                                              /*????s[k]*/
	
}