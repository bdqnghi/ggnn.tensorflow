

int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a%100;
	printf("%d\n",(a-b)/100);
	c=b%50;
    printf("%d\n",(b-c)/50);
	d=c%20;
    printf("%d\n",(c-d)/20);
	e=d%10;
    printf("%d\n",(d-e)/10);
	f=e%5;
    printf("%d\n",(e-f)/5);
	printf("%d",f);
	return 0;

}