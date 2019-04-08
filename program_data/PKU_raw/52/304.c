int a[100];
int main ( )
{
	void f(int *p,int n,int m);
	int *p,n,m;
	scanf("%d %d",&n,&m);
	for(p=a;p<a+n;p++)
		scanf("%d",p);
	p=a;
	f(p,n,m);
	for(p=a;p<a+n;p++)
	{
		if(p<a+n-1)
			printf("%d ",*p);
		else
			printf("%d\n",*p);
	}	
	return 0;
}
void f(int *p,int n,int m)
{
	int t;
	p+=n-1;
	t=*p;
	for(;p>a;p--)
		*p=*(p-1);
	*p=t;
	m-=1;
	if(m>0)
		f(p,n,m);
}
