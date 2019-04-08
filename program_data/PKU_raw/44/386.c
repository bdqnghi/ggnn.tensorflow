int reverse(int num);
void swap(int* a,int* b);
int main()
{
	int num,i;
	for(i=0;i<6;i++)
	{
	scanf("%d",&num);
	printf("%d\n",reverse(num));
	}
	return 0;
}
int reverse(int num)
{
	int a[20],i,n,mark=0;
	if(num>0)
		mark=1;
	for(i=0;;i++)
	{
		a[i]=num%10;
		num=(num-a[i])/10;
		if(num==0)
			break;
	}
	n=i;

	for(i=0;i<=(n/2);i++)
	{
		swap(&a[i],&a[n-i]);
	}
	for(i=n;i>=0;i--)
	{
		num=(num+a[i])*10;
	}
	num=num/10;
	return num;
}
void swap(int*a,int*b)
{
	int e;
	e=*a;
	*a=*b;
	*b=e;
}
