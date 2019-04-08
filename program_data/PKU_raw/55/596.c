void main()
{
	int a,b,k,i,q,f=0;
	char x[30],*p=x;
	long n=0,t;
	scanf("%d %s %d",&a,x,&b);
	k=strlen(x)-1;
	for(;k>=0;k--,p++)
	{
		if(*p>=48 && *p<=57)		t=(long)*p-48;
		else if(*p>=65 && *p<=90)	t=(long)*p-55;
		else if(*p>=97 && *p<=122)  t=(long)*p-87;
		i=k;
		while(i>0)
		{
			t=t*a;
			i--;
		}
		n+=t;
	}
	for(t=n,i=0;t>=b;i++)
	{
		t=t/b;
	}
	for(k=i,t=1;k>=0;k--,t=1)
	{
		i=k;
		while(i>0)
		{
			t=t*b;
			i--;
		}
		q=n/t;
		if(q==0 && f==0) continue;
		else if(f==0)
		{
			f=1;
			goto z;
		}
		else
		{
z:			if(q>=0 && q<=9)
			{
				printf("%d",q);
			}
			else if(q>=10)
			{
				printf("%c",q+55);
			}
			n=n-q*t;
		}
	}
	if(f==0) printf("0");
}
