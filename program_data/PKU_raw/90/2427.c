int main()
{
	int f(int a,int b);
	int n,a,b;
	scanf("%d",&n);
	for(;n-->0;)
		{scanf("%d%d",&a,&b);
	printf("%d\n",f(a,b));}
}
int f(int a,int b)
{
	if(a>0&&b>1)return(f(a,b-1)+f(a-b,b));
	else if(a<0||b<=0)return (0);
	else return(1);
}
	