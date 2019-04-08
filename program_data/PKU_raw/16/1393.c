
int main(int argc, char* argv[])
{

	int a,c,d;
	scanf("%d",&a);
	c=a;
	while(c>=1)
	{
	d=c-(c/10)*10;
	c=c/10;
	printf("%d",d);
	
	}
	if (a==0)
	printf("0");
	return 0;
}