int main()
{
	int he(int p,int q);
	int t,m,n;
	int i,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		sum=he(m,n);
		printf("%d\n",sum);
	}
	return 0;
}
int he(int p,int q)
{
	int kong(int a,int b);
	int man(int c,int d);
	int h;
	if(q==1) h=1;
	else h=kong(p,q)+man(p,q);
	return h;
}
int kong(int a,int b)
{
	int he(int p,int q);
	int e;
	if(b==1) e=1;
	else 
	{
		e=he(a,b-1);
	}
	return e;
}
int man(int c,int d)
{
	int he(int p,int q);
	int f;
	if(c<d) f=0;
	else if(d==1) f=1;
	else f=he(c-d,d);
	return f;
}