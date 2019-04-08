int main()
{
	char str[101],*p,inversed[101],*q,*r;
	int i,l;
	gets(str);
	l=strlen(str);
	r=inversed;
	for(p=str+l-1,q=p+1;p>=str;p--)
	{
		if(*p==' '&&p!=str)
		{
			for(i=1;p+i<q;i++,r++)*r=*(p+i);
			*r=' ',r=r+1;
			q=p;
		}
		if(p==str)
		{
			for(i=0;p+i<q;i++,r++)*r=*(p+i);
			*r='\0';
		}
	}
	r=inversed;
	printf("%s",r);
}
