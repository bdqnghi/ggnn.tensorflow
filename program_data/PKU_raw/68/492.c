
int sushu(int a)
{
	int i = 1;
	int j = 0;
	for(i = 1;i <= (int)sqrt(a);i = i + 2)
	{
		if((int)(a / i) * i == a)
		{
			j++;
		}
	}
	if(j == 1)
		return 1;
	else 
		return 0;
}

int main()
{
	int sushu(int a);
	int n ;
	scanf("%d",&n);
	int b = 6;
	int k;
	for(b = 6;b <= n;b = b + 2)
	{
		for(k = 3;k <= (int)(b / 2);k = k + 2)
		{
			if(sushu(k) == 1 && sushu(b-k) == 1)
			{
				printf("%d=%d+%d\n",b,k,b-k);
				break;
			}
		}
		k = 3;
	}
return 0;
}