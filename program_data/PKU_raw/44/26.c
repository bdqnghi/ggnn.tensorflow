int reverse(int num);
void main()
{
	int a[6],i;
	for(i=0;i<6;i++)scanf("%d",&a[i]);
	for(i=0;i<6;i++)printf("%d\n",reverse(a[i]));
}

int reverse(int num)
{
	int x=0,flag=0;
	if(num<0)
	{
		flag=1;
		num=0-num;
	}
	while(num!=0)
	{
		x=num%10+x*10;
		num=num/10;
	}
	if(flag==1)x=0-x;
	return(x);
}