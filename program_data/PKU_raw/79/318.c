int calculate(int n,int m)
{
	int num,monkey[1000]={0},*p;
	int i;
	num=n;
	for(i=0;i<n;i++)
	{
		monkey[i]=1;
	}
	p=&monkey[0]-1;

	while(num!=1)
	{
		for(i=1;i<=m;i++)
		{
			p+=1;
			if(p>monkey+n-1)
				p-=n;
			while(*p==0)
			{
				p+=1;
				if(p>monkey+n-1)
				    p-=n;
			}
		}
		*p=0;
		num-=1;
	}
	i=0;
	while(monkey[i]==0)
		i+=1;
	return(i+1);
}


void main()
{
	int n,m,king;
	do{
		scanf("%d%d",&n,&m);
		if(n!=0&&m!=0)
		{
		    king=calculate(n,m);
		    printf("%d\n",king);
		}
	}while(n!=0&&m!=0);
}