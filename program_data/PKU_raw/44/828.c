int reverse(int a)
{
	int i;
	for(i=0;(int)pow(10,i)<=a;i++);
	int word;
	word=i;
	int sum;
	sum=0;
	for(i=0;i<word;i++)
	{
		sum+=(a%10)*((int)pow(10,word-i-1));
		a/=10;
	}
	return sum;
}
int main()
{
	int num[6],a;
	scanf("%d\n%d\n%d\n%d\n%d\n%d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);
	int i;
	for(i=0;i<6;i++)
	{
		if(num[i]==0)
		{
			printf("0\n");
		}else{
			a=num[i];
			if(num[i]>0)
			{
				printf("%d\n",reverse(a));
			}else{
				a=-num[i];
			printf("%d\n",-reverse(a));
			}
		}
	}
	return 0;
}