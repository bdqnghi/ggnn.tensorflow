int main()
{
	void jiaogu(int);;
	int input;
	scanf("%d",&input);
	jiaogu(input);
	return 0;
}
void jiaogu(int num)
{
	if(num==1)
	{
		printf("End");
	}
	else
	{
		if(num%2==0)
		{
			printf("%d/2=%d\n",num,num/2);
			jiaogu(num/2);
		}
		else
		{
			printf("%d*3+1=%d\n",num,num*3+1);
			jiaogu(num*3+1);
		}
	}
}
			
