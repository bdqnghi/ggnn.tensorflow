void main()
{
	int n,i,j,b=1;
	char a[102],*p,*q;
	gets(a);
	n=strlen(a);
	p=&a[0];
	for(i=n-1;i>=0;i--)
		*(p+i+1)=*(p+i);
	*p=*(p+n+1)=' ';
	*(p+n+2)='\0';
    p=&a[n+1];
	for(;p>&a[0];p--)
	{
		if(*p==' ')
		{
			for(q=p-1;q>=&a[0];q--)
			{
				if(*q==' ')
				{
					if(q==&a[0])
                    b=0;
					for(q=q+1;q<p;q++)
						printf("%c",*q);
					break;
				}
			}
			if(b!=0)
			{
				printf(" ");
				b=1;
			}
		}
	}
}
		