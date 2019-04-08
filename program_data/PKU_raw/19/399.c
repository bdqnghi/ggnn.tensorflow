void main()
{
	char string[100];
	char word[100][100],a[100],b[100];char *p[100];char *p1,*p2;
	int i,j,k,strl,al,bl;
	gets(string);
	gets(a);
	gets(b);
	p1=a;
	p2=b;
	strl=strlen(string);
	al=strlen(a);
	bl=strlen(b);
	j=0;k=0;
	for(i=0;i<strl;i++)
	   if(string[i]!=32)
		{
			word[j][k]=string[i];
			if(string[i+1]!=32)
				k++;
			else if(string[i+1]==32||string[i+1]=='\0')
			{
				word[j][k+1]='\0';
				k=0;
				j++;
			}
	   }
	for(i=0;i<j+1;i++)
		p[i]=word[i];
	for(i=0;i<j+1;i++)
		if(strcmp(p1,*(p+i))==0)
			p[i]=p2;
     for(i=0;i<j;i++)
	   printf("%s ",p[i]);
    printf("%s",p[j]);
}
