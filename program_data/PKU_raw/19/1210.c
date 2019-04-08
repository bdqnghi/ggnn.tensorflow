
void main()
{
	char *s,*p1,*p2,*temp,*a,*b;
	int i,j,t,n,len;
	s=(char *)malloc(sizeof(char)*1000);
	a=(char *)malloc(sizeof(char)*101);
	b=(char *)malloc(sizeof(char)*101);
	gets(s);
    len=strlen(s);
	p1=p2=s;
	*(s+len)=' ';
	*(s+len+1)='\0';
	gets(a);
	gets(b);
	for(;*p1;p1++)
	{
		if(*p1==' '||*p1=='\0')
		{   len=p1-p2;
			temp=(char *)malloc(sizeof(char)*101);
			for(i=0;i<len;i++)
				*(temp+i)=*(p2+i);
			*(temp+len)='\0';
			p2=p1+1;
			if(strcmp(temp,a)==0)*p2=='\0'?printf("%s",b):printf("%s ",b);
			else *p2=='\0'?printf("%s",temp):printf("%s ",temp);
            free(temp);
		}
	}
}