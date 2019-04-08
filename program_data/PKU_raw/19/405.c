void main()
{
	char s[100],a[100],b[100];
	char *p1,*p2,*p3,*p4;
	int n1,n2,n3,flag=1;
	gets(s);
	gets(a);
	gets(b);
	p1=s;
	p2=a;
	p3=b;
	n1=strlen(s);
	n2=strlen(a);
	n3=strlen(b);
	while(p1<s+n1)
	{
		p2=a;
		p3=b;
		if(isalpha(*p1))
		{
			if(flag)
			{
				flag=0;
				for(p4=p1;p2<a+n2;p4++,p2++)
					if(*p4!=*p2)
						break;
				if((p2-a)==n2)
				{
					for(;p3<b+n3;p3++)
						printf("%c",*p3);
					p1=p1+n2;
				}
				else
				{
					for(;isalpha(*p1);p1++)
						printf("%c",*p1);
				}
			}
		}
		else
		{
			printf(" ");
			flag=1;
			p1++;
		}
	}
}