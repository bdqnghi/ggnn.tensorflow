void kk(int n,int a[])
{
	int i=0;
	while(n!=0)
	{
		a[i]=n;
		n/=2;
		i++;
	}
}
int gg(int n)
{
	int i=0;
	while(n!=0)
	{
		n=n/2;
		i++;
	}
	return(i);
}

void main()
{
	int a,b,c[20],d[20],e,f,i;
	scanf("%d %d",&a,&b);
	e=gg(a);
	f=gg(b);
	kk(a,c);
	kk(b,d);
	for(i=1;;i++)
	{
		if(c[e-i]!=d[f-i])
		{
			printf("%d",c[e-i+1]);
			break;
		}
	}
}
