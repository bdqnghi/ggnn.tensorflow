void main()
{
	int reverse(int num);
	int a[6];
	int i,c;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
		c=reverse(a[i]);
		printf("%d",c);
		if(i<5)
			printf("\n");
	}
}
int reverse(int num)
{
	int num1,i,n,k,num2=0;
	if(num<0)
		num1=(-num);
	else
		num1=num;
	n=log10(num1);
	for(i=n+1;i>0;i--)
	{
		k=num1/pow(10,i-1);
		num2=k*pow(10,n-i+1)+num2;
		num1=num1-k*pow(10,i-1);
	}
	if(num<0)
		return(-num2);
	else
		return(num2);
}