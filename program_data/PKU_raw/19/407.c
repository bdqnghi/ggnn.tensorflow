void main()
{
	char a[100],b[100],c[100],*d,*e,*f;
	int al,bl,cl,i,j,k;
	gets(a);gets(b);gets(c);
	al=strlen(a);bl=strlen(b);cl=strlen(c);
	d=&a[0];e=&b[0];f=&c[0];
	
		for(i=0;i<al;i++)
	{
        for(j=0,k=i;(*(d+i-1)==' '||i==0)&&j<bl&&*(d+k)==*(e+j);j++,k++){}
		if(j==bl)
		{break;}
	}
		if(j!=bl)
		goto line;

	for(j=0;j<al-bl-i;j++)
	{
		*(d+i+j)=*(d+i+j+bl);
	}
	al=al-bl;
	for(j=al-1;j>=i;j--)
	{
		*(d+j+cl)=*(d+j);
	}
	for(j=i,k=0;j<cl+i;j++,k++)
	{
		*(d+j)=*(f+k);
	}
	al=al+cl;
	*(d+al)='\0';
	


	for(i=i+cl;i<al;i++)
	{
        for(j=0,k=i;(*(d+i-1)==' '||i==0)&&j<bl&&*(d+k)==*(e+j);j++,k++){}
		if(j==bl)
		{break;}
	}
	if(j!=bl)
		goto line;
	for(j=0;j<al-bl-i;j++)
	{
		*(d+i+j)=*(d+i+j+bl);
	}
	al=al-bl;
	for(j=al-1;j>=i;j--)
	{
		*(d+j+cl)=*(d+j);
	}
	for(j=i,k=0;j<cl+i;j++,k++)
	{
		*(d+j)=*(f+k);
	}
	al=al+cl;
	*(d+al)='\0';
	
line:	puts(a);

}
