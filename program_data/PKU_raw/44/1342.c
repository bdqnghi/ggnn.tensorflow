
int main()
{
	int num;
	int i;
	
int reverse(int num,int s);
	for(i=0;i<6;i++)
	{
		scanf("%d",&num);
		if(num<0)
		{
			num=-num;
			printf("-%d\n",reverse(num,0));
		}
		else
			printf("%d\n",reverse(num,0));
	}
	return 0;
}

int reverse(int num,int s)
{
	s=s*10+num%10;
	if(num>=10)
		return reverse(num/10,s);
	else
		return s;
}