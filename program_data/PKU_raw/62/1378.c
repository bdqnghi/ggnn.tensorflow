char* getmemory(int num)
{
	char *p=(char*)malloc(num*sizeof(char));    //????????
	return p;
}

void main()
{
	char *str,*p1,*a,*b;          //str???????,p1?????????
	int n;                        //a,b???????????.
	str=getmemory(100);          // ?????
	p1=a=str;
	gets(str);
	n=strlen(str);
	b=a+n;
	for(str=a;str<b;)
	{
		if(*str==' ')
		{	p1=str;
			if(*(p1+1)==' ')
			{
				p1=str;
				for(;p1<b-1;p1++){*p1=*(p1+1);}
				n-=1;
			}
			else str++;
		}
		else str++;
	}
	for(p1=a;p1<a+n;p1++)printf("%c",*p1);
}

