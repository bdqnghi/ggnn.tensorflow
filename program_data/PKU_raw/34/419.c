int main()
{
	int n,i,j,k,l,a,b;

	scanf("%d",&n);
	b=n;
	if(b==1)
	{
		printf("End");}

	else for(i=1;i<1000000;i++)
	{
		if(b%2==1)
		{a=b*3+1;
		printf("%d*3+1=%d\n",b,a);
		b=a;}
		else if(b%2==0)
		{a=b/2;
		printf("%d/2=%d\n",b,a);
		b=a;}
		if(a==1)
		{printf("End");
		break;}
	}
	


	return 0;
}
