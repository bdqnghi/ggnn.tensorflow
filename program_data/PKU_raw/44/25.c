
int reverse(int num)
{
	int i,j,num1=0,k;
	if(num>=0){
	for(i=1;i<=num;i=i*10);
	i=k=i/10;
	for(j=1;j<=k;j=j*10)
	{
       num1=num1+num/i*j;
	   num=num-num/i*i;
	   i=i/10;
	}}
	else if(num<0)
	{
	for(i=1;i<=(-num);i=i*10);
	i=k=i/10;
	for(j=1;j<=k;j=j*10)
	{
       num1=num1+num/i*j;
	   num=num-num/i*i;
	   i=i/10;
	}

	}
	return (num1);
}

main()
{
	int a[6],i,b[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		b[i]=reverse(a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",b[i]);
	}
}
