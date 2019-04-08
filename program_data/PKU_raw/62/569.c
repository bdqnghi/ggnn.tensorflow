void main()
{
	char *p;
	p=(char*)malloc(1000*sizeof(char));
	int i,j,k,a,b;
	b=0;
	for(i=0;i<1000;i++)
	{
		*(p+i)=getchar();
		if(*(p+i)=='\n')
		{a=i;break;}
	}
    for(i=0;i<a;i++)
	{
        if(*(p+i)==' ')
		{ 
			while(*(p+i+1)==' ')
			{
				b++;
				for(j=i+1;j<a;j++)
			{*(p+j)=*(p+j+1);}}
		}
	}
	for(i=0;i<a-b;i++)
	{printf("%c",*(p+i));}}
