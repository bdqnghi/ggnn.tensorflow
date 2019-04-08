int f(int a,int b)
{
	int r1,r2,a2,b2,c;
	r1=0;
	r2=0;

	a2=a;
	b2=b;
	for(;a2!=0;)
	{
		a2=a2/2;
		r1++;
	}
	for(;b2!=0;)
	{
		b2=b2/2;
		r2++;
	}                              
	if(r1>r2)
	{c=pow(2,r1-r2);
	a=a/c;}
	if(r1<r2)
	{c=pow(2,r2-r1);
	b=b/c;}               
	for(;;)
	{
		if(a==b)
		{                     
			printf("%d",a);
			break;
		}
		a=a/2;
		b=b/2;
	}

	return a;

}



int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	f(a,b);

	return 0;
}