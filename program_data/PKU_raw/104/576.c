int main()
{
	int m,n,an;
	scanf("%d %d",&m,&n);
	an=f(m,n);
	printf("%d",an);

}
int f(int a,int b)
{
	int w;
	if(a==b)
		w=a;
	if(a>b)
		w=f(a/2,b);
	if(a<b)
		w=f(a,b/2);
	return w;

}
