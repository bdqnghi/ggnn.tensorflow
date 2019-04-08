int pan(long n)
{
	int i,l=0,t=sqrt(n);
	for(i=2;i<=t;i++)
	{
		if(n%i==0) break;
	}
	if(i>t) l=1;
	if(n==1) l=0;
	return l;
}
int wei(long n)
{
	int i=1;
	while(1)
	{
		n=n/10;
		if(n==0) break;
		i=i+1;
	}
	return i;
}
int huiwen(long n)
{
	char a[40]={'\0'};
	int w=wei(n),i,l,s=1;
	for(i=0;i<w;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(l=0;l<w/2;l++) s=s*(a[l]==a[w-1-l]);
	return s;
}
int main()
{
	long p=0,i,m,n,l;
	scanf("%d  %d",&m,&n);
    for(i=m;i<=n;i++)
	{
		if(huiwen(i)&&pan(i)) 
		{
			printf("%d",i);
			p+=1;
			break;
		}
	}
	for(l=i+1;l<=n;l++)
	{
		if(huiwen(l)&&pan(l))
		{
			printf(",%d",l);
			p+=1;
		}
	}
	if(p==0) printf("no\n");
	return 0;
}

