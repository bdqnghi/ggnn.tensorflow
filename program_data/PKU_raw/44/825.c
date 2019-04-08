int opp(int a)
{
	int num[5],i,j,rev=0;
	for(i=0;a!=0;i++)
	{
		num[i]=a%10;
		a=(a-a%10)/10;
	}
	for(j=0;j<i;j++)
	{
		rev=rev+num[j]*pow(10,i-j-1);
	}
	return rev;
}
int main()
{
	int opp(int a);
	int i;
	for(i=1;i<7;i++)
	{
		int n;
		scanf("%d",&n);
		if(n>=0)
		{
			printf("%d\n",opp(n));
		}
		else
		{
			printf("-%d\n",opp(-n));
		}
	}
	return 0;
}
