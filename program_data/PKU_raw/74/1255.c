
int n,m;
int ans[100];
int look=0;
int i;
int check1(int num);
int check2(int num);
int main(void)
{
	scanf("%d %d",&n,&m);
	for(i=0;i<100;i++)
	{
		ans[i]=0;
	}
	for(i=n;i<=m;i++)
	{
		if(check1(i) && check2(i))
		{
			ans[look]=i;
			look++;
		}
	}
	if(look==0)
	{printf("no");
	return 0;}
	printf("%d",ans[0]);
	for(i=1;i<look;i++)
	{
		printf(",%d",ans[i]);
	}
    return 0;
}

int check1(int num)
{
	int j;
	for(j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
			return 0;
	}
	return 1;
}
int check2(int num)
{
	int len=0;
	int ctr1;
	int number1[100];
	int number2[100];
	int temp=num;
	while(temp!=0)
	{
		temp=temp/10;
		number1[len+1]=temp;
		len++;
	}
    number1[0]=num;
	for(ctr1=0;ctr1<len;ctr1++)
	{
        number2[ctr1]=number1[ctr1]-number1[ctr1+1]*10;
	}
	temp=0;
	for(ctr1=0;ctr1<len;ctr1++)
	{
		temp=temp*10+number2[ctr1];
	}
	if(temp==num)
		return 1;
	else return 0;
}