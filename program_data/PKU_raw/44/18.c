
int reverse(int num)
{
	int i,rev=0,k;
	if(num==0) return(0);
	else if(num>0)
	{
		for(k=1;(num/k)>=10;k*=10);
//		printf("k=%d",k);
		for(i=1;k>=1;k/=10,i*=10)
		{
			rev+=i*(num/k);
			num-=k*(num/k);
		}
	}
	else if(num<0)
	{
		rev=-1*reverse(-1*num);
	}
	return(rev);

}

void main()
{
	int num[6];
	int i;
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(num[i]));
}
