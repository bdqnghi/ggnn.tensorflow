void main()
{
	int huiwen(int);
	int prime(int);
	int s[80]={0};
	int a,b,c,d,i,j;
	d=0,i=0;
	scanf("%d%d",&a,&b);
	for(c=a;c<=b;c++)
	{
		if(huiwen(c)&&prime(c))
		{
			d=d+1;
			s[i++]=c;
		}
		s[i]='\0';
	}
	if(d==0)
		printf("no");
	if(d==1)
		printf("%d",s[0]);
	if(d>=2)
	{
		printf("%d,%d",s[0],s[1]);
		for(j=2;j<d;j++)
			printf(",%d",s[j]);
	}
}


int huiwen(int q)
{
	int w,e,t,flag;
	e=0;
	t=q;
	while(q!=0)
	{
		w=q%10;
		e=e*10+w;
		q=q/10;
	}
	if(e==t)
	{
		flag=1;
		return(flag);
	}
	else
	{
		flag=0;
		return(flag);
	}
}

int prime(int p)
{
	int g,flag;
	for(g=2;g<=sqrt(p);g++)
		if(p%g==0)
		{
			flag=0;
			return(flag);
		}
		if(g>sqrt(p))
		{
			flag=1;
			return(flag);
		}
}
