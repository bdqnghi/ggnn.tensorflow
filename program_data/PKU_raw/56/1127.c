
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
    int a,b,c,d,e;
	a=n%10;
	b=(n-a)%100/10;
	c=(n-a-b*10)%1000/100;
	d=(n-a-b*10-c*100)%10000/1000;
	e=n/10000;
	if(e!=0)
	{
		printf("%d",e+d*10+c*100+b*1000+a*10000);
	}
	if(e==0&&d!=0)
	{
		printf("%d",d+c*10+b*100+a*1000);
	}
	if(e==0&&d==0&&c!=0)
	{
		printf("%d",c+b*10+a*100);
	}
	if(e==0&&d==0&&c==0&&b!=0)
	{
		printf("%d",b+a*10);
	}
	if(e==0&&d==9&&c==0&&b==0)
	{
		printf("%d",a);
	}
	return 0;
}

