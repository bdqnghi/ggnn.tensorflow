int main()
{
	int n,is=0;
	scanf("%d",&n);
	if(n%3==0)
	{
	  printf("%d",3);
	  is=1;
	}
	if(n%5==0)
	{
	  if(is)printf(" ");
	  printf("%d",5);
	  is=1;
	}
	if(n%7==0)
	{
	  if(is)printf(" ");
	  printf("%d",7);
	  is=1;
	}
	if(is==0)printf("n");
	return 0;
}