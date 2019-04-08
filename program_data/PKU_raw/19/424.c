void main()
{
	char str[100],s1[100],s2[100],t[100];
	char *p,*p1;
	int i=0;
	gets(str);
	gets(s1);
	gets(s2);
	for(p=str;*(p-1)!='\0';p++)
	{
		if(*p==' '||*p=='\0')//??????
		{
			*(t+i)='\0';//?????
			if(strcmp(s1,t)==0)//????
				p1=s2;
			else p1=t;//??

			if(p-strlen(t)!=str)//???????
				putchar(' ');
			printf("%s",p1); 
			i=0;
		}
		else
		{
			*(t+i)=*p;
			i++;
		}
	}		
}