int judge(int num)
{
	if(num%7==0) return 0;
	while(num>0)
	{
		if((num-7)%10==0) return 0;
		num/=10;
	}
	return 1;
}
void main()
{
    int i,num,sum=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		if(judge(i)==1) sum+=i*i;
	printf("%d\n",sum);
}
