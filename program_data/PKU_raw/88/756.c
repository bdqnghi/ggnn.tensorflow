char* getmemory(int num)
{
	char *p=(char*)malloc(num*sizeof(char));
	return p;
}

void main()
{
	char *str,*p1,*a;
	int n,m,k;
	str=getmemory(31);
	gets(str);
	n=strlen(str);
	p1=a=str;
	k=0;
	for(;*str!='\0';)
	{
		if(*str<'0'||*str>'9')
		{	
			k+=1;
			if(*(str+1)>='0'&&*(str+1)<='9')
			{
				m=str-k-p1;
				if(p1==a){for(;p1<=str-k;p1++)printf("%c",*p1);printf("\n");}
				else {for(p1=p1+1;p1<=str-k;p1++)printf("%c",*p1);printf("\n");}
				p1=str;	
				k=0;
			}
		}
		str++;
	}
	if(p1==a)
		for(;p1<str-k;p1++)printf("%c",*p1);
	else
		for(p1=p1+1;p1<str-k;p1++)printf("%c",*p1);

}