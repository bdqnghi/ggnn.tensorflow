void main ()
{
	char str1[257],str2[257],str3[257];
	int i;
	int b,c;
	char *p;
	
	
	scanf("%s%s%s",str1,str2,str3);
	
	b=strlen(str2);
	
	p=strstr(str1,str2);
	
	if(p)
		
	{
		for(i=0;str1+i<p;i++)
		{
			printf("%c",str1[i]);
		}
		printf("%s",str3);
		
		p=p+b;
		
		printf("%s",p);
		
	}

	else
		printf("%s",str1);
}