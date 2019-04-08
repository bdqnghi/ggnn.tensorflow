int f(int,int);
void main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int m,n,a;
		scanf("%d %d",&m,&n);
		a=f(m,n);
		printf("%d\n",a);
	}
}
int f(int a,int b)
{
	if(a<0) return(0);
	else if(b<0) return(0);
	else if(a==1||b==1) return(1);
	else
	{
		int s;
		s=f(a,b-1)+f(a-b,b);
		return(s);
	}
}


