int main()
{
	char cc[500]={'\0'},c1[20]={'\0'},c2[20]={'\0'},c[30][20]={'\0'},*p1,*p2,*p3,*p4;
	int a,b,d,e=0,f=0,h,i;
	gets(cc);
	gets(c1);
	gets(c2);
    p1=&c[0][0];
	p2=&c1[0];
	p3=&c2[0];
	p4=&cc[0];
	for (a=0;a<500;a++)
	{
		if (*(p4+a)==' ')
		{
			e++;
			f=0;
		}
		else if(*(p4+a)!='\0')
		{
			*(p1+e*20+f)=*(p4+a);
			f++;
		}
		else 
		{
			break;
		}
	}
	i=strlen(c1);
	h=strlen(c2);
    for (a=0;a<e+1;a++)
	{
		for (b=0;b<i;b++)
		{
			if (*(p1+a*20+b)!=*(p2+b))
			{
				break;
			}
		}
		if (b==i)
		{
			for (d=0;d<h;d++)
			{
		        *(p1+a*20+d)=*(p3+d);
			}
        	for (d=h;d<20;d++)
			{
	           	*(p1+a*20+d)='\0';
			}
		}
	}
	for (d=0;d<e;d++)
	{
		printf("%s ",c[d]);
	}
	printf("%s\n",c[e]);
}
	