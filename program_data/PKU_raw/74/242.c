int su(int x);
int hui(int x);
void main()
{
	int m,n,flag=0,x;
	scanf("%d%d",&m,&n);
	for(x=m;x<=n;x++)
	{
		if(su(x)+hui(x)==2)
		{
			if(flag==1)printf(",");
			printf("%d",x);
			flag=1;
		}
	}
	if(flag==0)printf("no");
}

int su(int x)
{
	if(x==1)return(0);
	else 
	{
		int i,flag=1;
		for(i=2;i<=x/2;i++)
		{
			if(x%i==0){flag=0;break;}
		}
		return(flag);
	}
}

int hui(int x)
{
	int i=x,n=0,flag=1,*p;
	while(i>0){i=i/10;n+=1;}
	p=(int *)malloc(n*sizeof(int));
	for(i=x;i>0;i=i/10)
	{
		*p=i%10;
		p+=1;
	}
	i=0,p-=n;
	while(i<n/2)
	{
		if(*(p+i)!=*(p+n-i-1)){flag=0;break;}
		i+=1;
	}
	return(flag);
}