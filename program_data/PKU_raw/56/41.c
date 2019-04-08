
int main(int argc, char* argv[])
{
    int a,b,c,n;
	scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/10;
	c=n-100*a-10*b;
	int m;
	m=100*c+10*b+a;
	printf("%d\n",m);
	return 0;
}