
int main()
{
	int i = 0, j = 0, total = 0 , n = 0, m = 0,temp = 0;
	scanf("%d",&n);
	
	for(i = 0; i < n ; i++)
	{
		scanf("%d",&m);
		total = 60;
		for( j = 0;j < m ; j++)
		{
			scanf("%d",&temp);
			if(temp > total)
			break;
			if(temp + 3 >= total)
			{
				total = temp;
				break;
			}
			else 
			{
				total -= 3;
			}
		}
		printf("%d\n",total);
		while((getchar())!='\n')
		continue;
	}

	return 0;
}