void f(int n,int w)
{
	int x;
	x=(int)pow(10,w-1);
	if (w!=1) f(n%x,w-1);
	printf("%d",n/x);
}
int main()
{
	int n;
	scanf("%d",&n);
	int w=(int)(log(n)/log(10))+1;
	f(n,w);
}
