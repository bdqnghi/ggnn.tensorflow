int f(int m,int n)
{
	int s=0,i=0;
	int *pa,*p;
	pa=(int*)malloc(sizeof(int)*n);
	for(p=pa;p<pa+n;p++)
	{
	   *p=1;
	}
	p=pa;
	while(s!=n*m)
	{
		s=s+*(p+i%n);
		if(s%m==0)
		{
			*(p+i%n)=0;
		}
		i++;
	}
	if(i%n==0)
		i=n;
	else
		i=i%n;
	return(i);
}
void main()
{
	while(1)
	{
	int m,n;
	scanf("%d%d",&n,&m);
	if(m>0&&n>0)
		printf("%d\n",f(m,n));
	else
		break;
	}
}
	
