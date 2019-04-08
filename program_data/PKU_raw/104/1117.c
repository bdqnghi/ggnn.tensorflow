int main()
{
	void Hanshu(int a,int b);
	int a,b,k;
	scanf("%d %d",&a,&b);
	Hanshu(a,b);
	return 0;
}

void Hanshu(int a,int b)
{
	if(a==b) printf("%d",a);
	else if(a>b)
	{
		a=a/2;Hanshu(a,b);
	}
	else
	{
		b=b/2;Hanshu(a,b);
	}
}