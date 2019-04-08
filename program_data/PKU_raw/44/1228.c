int main()
{
	int a[6],i,j,b[6],m,n;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	int reverse(int num);
	for(j=0;j<6;j++)
	{
		b[j]=reverse(a[j]);
		printf("%d\n",b[j]);
	}
	return 0;
}
int reverse(int num)
{
	int m,n=0;
	m=num;
	while(num!=0)
	{
		n=n*10+num%10;
		num/=10;
	}
	num=n;
	return(num);
}