
int main()
{
	int p(int a);
	double n,k;
	int o;
	scanf("%lf %lf",&n,&k);
	o=-k*(n-1)+pow(n,n);
	p(o);
}

int p(int a)
{
	printf("%d",a);
}

