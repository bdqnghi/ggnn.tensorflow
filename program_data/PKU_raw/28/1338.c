
int sums[310];

void main()
{
	int n=0;
	int i;
	int sum = 0;
	char a;
	while(a = getchar())
	{
		if(a == '\0' || a == '\n' )
		{
			sums[n] = sum;
			n++;
			break;
		}
		else if( a == ' ' )
		{
			if(sum != 0)
			{
				sums[n] = sum;
				n++;
			}
			sum = 0;
		}
		else
		{
			sum++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d,",sums[i]);
	}
	printf("%d",sums[n-1]);
}
