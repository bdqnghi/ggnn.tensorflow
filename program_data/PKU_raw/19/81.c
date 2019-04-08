/* Note:Your choice is C IDE */
void main()
{
	int i,value,la,lb,ls;
	char *p,*ps,s[100]="",a[100]="",b[100]="";
	gets(s);
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	ls=strlen(s);
	for(p=s;p<s+100;p++)
	{
		value=1;
		if((p==s||*(p-1)==' ')&&(*p==a[0]))
		{
			for(ps=p+1,i=1;a[i]!='\0';ps++,i++)
				if(*ps!=a[i]) value=0;
			if(value==1)
			{
				if(la==lb)
					for(i=0;i<la;i++)
						(*p++)=b[i];
				else
					if(la>lb)
					{	
						for(i=0;i<lb;i++)
							(*p++)=b[i];
						while(*ps!='\0')
							(*p++)=(*ps++);
						*p='\0';
					}
					else
					{
						for(i=99;i>=(ps-s)+lb-la;i--)
							{s[i]=s[i-lb+la];}
						for(i=0;i<lb;i++)
							(*p++)=b[i];					
					}
			}
		}
		
	}	
	printf("%s",s);
}