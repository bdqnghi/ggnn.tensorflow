int main(int argc, char* argv[])
{
	int a,i,b;
	scanf("%d",&a);
	for(i=1;i<=1000;i++)
	{
		if(a==1)
	{
		printf("End");
		break;
	}
	if(a%2==1)
	{
		b=a*3+1;
		printf("%d*3+1=%d\n",a,b);
		a=b;
	}
	else
	{
		b=a/2;
		printf("%d/2=%d\n",a,b);
		a=b;
	}
	
	}
	return 0;
}
