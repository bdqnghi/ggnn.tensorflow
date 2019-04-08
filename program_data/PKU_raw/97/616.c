int main(int argc, char* argv[])
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&n);
    a=n/100;
	b=(n-a*100)/50;
	c=(n-a*100-b*50)/20;
    d=(n-a*100-b*50-c*20)/10;
    e=(n-a*100-b*50-c*20-d*10)/5;
    f =n-a*100-b*50-c*20-d*10-e*5;

	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}