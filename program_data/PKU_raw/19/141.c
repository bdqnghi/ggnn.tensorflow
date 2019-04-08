char str1[150],str2[50],str3[50];
char *p1=str1,*p2=str2,*p3=str3;

int compare(char *local,int len)
{
	p2=str2;
	char* p;
	int flag=1;
	for(p=local;*p2!='\0'&&flag==1&&p<local+len;p2++,p++)
		if(*p!=*p2) flag=0;
	if(*p2=='\0'&&p==local+len) return 1;
	else return 0;
}

int main()
{
	char newline[150];
	char *news=newline,*local,*p;
	int flag=1,len=0;
	gets(p1);gets(p2);gets(p3);
	for(p1=str1;p1<=str1+strlen(str1);p1++)
	{
		if(isalpha(*p1))
			if(flag==1) flag=0,len=1,local=p1;
		    else len++;
		else
			if(flag==0) 
			{
				flag=1;
				if(compare(local,len)) for(p3=str3;*p3!='\0';p3++,news++) *news=*p3;
				else for(p=local;p<local+len;p++,news++) *news=*p;
				*news++=*p1;
			}
	}
	*news='\0';
	for(news=newline;*news!='\0';news++)
		printf("%c",*news);
	
	return 0;

}
