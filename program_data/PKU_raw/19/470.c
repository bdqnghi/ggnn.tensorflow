void main()
{
	char a[100],b[100],c[100],d[100],*p,*q,*r;
	int i,j=0,m,e,t;
	gets(a);
	gets(b);
	gets(c);
	for(p=a;p<a+strlen(a);p++)
	{
		if(*p!=*b||(*p==*b&&(*(p+strlen(b))!=' ')&&(*p==*b&&*(p+strlen(b))!='\0'))||((*p==*b&&*(p)!=*a)&&(*p==*b&&*(p-1)!=' ')))
		{d[j]=*p;j++;}
		else if(*p==*b&&((*(p+strlen(b))==' '||*(p+strlen(b))=='\0'))&&(*(p-1)==' '||*p==*a))
		{   q=p;
			m=0;
		for(i=0;i<strlen(b);i++)
		{if(*p!=*(b+i))
		{
			m=1;
			for(r=q;r<=q+i;r++)
			{*(d+j)=*r;j++;}
			break;}
		else p++;}
		if(m==0){p--;for(e=0;e<strlen(c);e++){*(d+j)=*(c+e);j++;}}
		}
	}
	for(t=0;t<j;t++)
		printf("%c",*(d+t));
}