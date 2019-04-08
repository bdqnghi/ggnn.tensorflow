int reverse(int num)
{
	int i,a,b;
	a=0;
	if(num<0)
	{
		num=-num;
	}
	for(i=0;num>=1;i++)
	{
		b=num%10;
		a=a*10+b;
		num=(num-b)/10;
	}
	return (a);

} 
void main()
{ 
	int i;
	int a[6],b[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		b[i]=reverse(a[i]);
	}
	for(i=0;i<6;i++)
	{
		if(a[i]>=0)
		{
			printf("%d\n",b[i]);
		}
		else
		{
			printf("-%d\n",b[i]);
		}
		
	}

	
}
