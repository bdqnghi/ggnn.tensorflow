
main()
{
	char str[1000],*p,*p1,*p2,*p3;
	int len,max=0,min=100;
	gets(str);
	for(p1=p=str;*p!='\0';p++)
	{
		if(*p==' ') 
		{
			*p='\0';
			len=strlen(p1);
			if(len<min)   {min=len;p2=p1;}
			if(len>max) {max=len; p3=p1;}
			p1=p+1;
		}
	}
		len=strlen(p1);
			if(len<min)   {min=len;p2=p1;}
			if(len>max) {max=len; p3=p1;}

	puts(p3);
	puts(p2);
}
