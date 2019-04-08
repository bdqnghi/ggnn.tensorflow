int main(int argc, char* argv[])
{
	int n,a,b,m;
   	scanf("%d",&n);
	for(a=0,b=0;n>0;n--)
	{
		scanf("%d",&m);
		if(m>a)
		{	b=a;
			a=m;
		
		
		}else if(m>b&&m<a)
		{
			b=m;
		
		
		}
	
	}
printf("%d\n%d",a,b);

	return 0;
}