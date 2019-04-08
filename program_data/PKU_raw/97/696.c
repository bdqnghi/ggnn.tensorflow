
int main()
{
	int sum,num[6]={0,0,0,0,0,0};
	int i;

	scanf("%d",&sum);

	if(sum>=100)
	{
		num[0]=sum/100;
		sum=sum%100;
	}
	if(sum>=50)
	{
		num[1]=sum/50;
		sum=sum%50;
	}
	if(sum>=20)
	{
		num[2]=sum/20;
		sum=sum%20;
	}
	if(sum>=10)
	{
		num[3]=sum/10;
		sum=sum%10;
	}
	if(sum>=5)
	{
		num[4]=sum/5;
		sum=sum%5;
	}
	if(sum>=1)
	{
		num[5]=sum/1;
		sum=sum%1;
	}

	for(i=0;i<6;i++)
	{
		printf("%d\n",num[i]);
	}

	return 0;
}
