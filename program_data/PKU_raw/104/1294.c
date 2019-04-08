

int main(int argc, char* argv[])
{
	int a,b;
	int temp;
	scanf("%d %d",&a,&b);
	do
	{
		if(a>b)
		  a=a/2;
		if(a<b)
		  b=b/2;
	}while(a!=b);
	printf("%d",a);
	return 0;
}