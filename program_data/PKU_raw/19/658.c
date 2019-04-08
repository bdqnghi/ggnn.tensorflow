char former[150];
char zhao[10],huan[10];
void alter(char*p)
{
	
	char *p2;
	p2=p+strlen(zhao)+1;
	char p3[100];
	strcpy(p3,p2);
	*(p+1)='\0';
	strcat(former,huan);
	strcat(former,p3);
}

int main()

{
	
	int i;
	
	gets(former);
	scanf("%s%s",zhao,huan);
	char *p0,*p1;
	p0=former;
	for(;*p0!='\0';p0++)
	{	
		if(*p0==' '&&*(p0+1)==zhao[0])
		{
			for(p1=p0+1,i=0;*p1==zhao[i]&&zhao[i]!='\0';p1++,i++);
			if((*p1==' '||*p1=='\0')&&zhao[i]=='\0')
				alter(p0);
		}
		
	}
	p0=former;
	for(p1=p0,i=0;*p1==zhao[i]&&zhao[i]!='\0';p1++,i++);
	if((*p1==' '||*p1=='\0')&&zhao[i]=='\0')
	{
		char *p2;
		p2=p0+strlen(zhao);
		char p3[100];
		strcpy(p3,p2);
		strcat(huan,p3);
		printf("%s",huan);
		return 0;
	
						
	}
	     	
	 	

	

	printf("%s\n",former);



		


	return 0;
}