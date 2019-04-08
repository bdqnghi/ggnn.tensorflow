main()
{
	char str1[100],str2[100],str3[100];
	char *p1,*p2,*p3,*p[100];
	int i=0,j;
	gets(str1);
	gets(str2);
	gets(str3);
	p1=str1;
	p2=str2;
	p3=str3;
	p[0]=str1;
	for(;*p1!='\0';p1++)
	{
		
		if(*p1==' ')
		{ i++;*p1='\0';
		p[i]=p1+1;
		}
	}

	for(j=0;j<=i;j++)
	{
		if(strcmp(p[j],p2)==0)
			p[j]=p3;
	}

	for(j=0;j<i;j++)
	{
		printf("%s ",p[j]);
	}
	printf("%s",p[i]);
	
}
