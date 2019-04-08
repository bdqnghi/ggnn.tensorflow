void main()
{
	char s[500],c,*max,*min,*p;
	int i,word=0,lmax=0,lmin=100,a;
	gets(s);
	for(i=0;(c=s[i])!='\0';i++)
	{
		if(c!=' ')
		{
			if(word==0)
			{
		    	a=1;
				p=s+i;
			    word=1;
			}
			else a++;
		}
		if(c==' '||s[i+1]=='\0') 
		{
			if(word==1)
			{
			   if(a>lmax) 
			   {
			    	max=p;
			    	lmax=a;
			   }
			   if(a<lmin) 
			   {
			    	min=p;
				    lmin=a;
			   }
			}
			word=0;
		}
	}
	while(*max!=' '&&*max!='\0')
		putchar(*(max++));
	putchar('\n');
	while(*min!=' '&&*min!='\0')
		putchar(*(min++));
}
