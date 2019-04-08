int main(int argc, char* argv[])
{
	int n;
	int p;
	int q;
	int i , j , k;
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i++)
	{
		int sum = 0;
		int num;
		scanf("%d" , &p);
		scanf("%d" , &q);
		if(p == 1 && q == 1)
		{
			scanf("%d" , &num);
			printf("%d" , num);
			break;
		}
		for(j = 0 ; j < q ; j++)
		{
			scanf("%d" , &num);
			sum += num;
		}
		for(j = 1 ; j < p-1 ; j++)
		{
			for(k = 0 ; k < q ; k++)
			{
				scanf("%d" , &num);
				if(k == 0 || k == q-1)
				{
					sum += num;
				}
			}
		}
		for(j = 0 ; j < q ; j++)
		{
			scanf("%d" , &num);
			sum += num;
		}
		printf("%d\n" , sum);
	}
	


	return 0;
}
