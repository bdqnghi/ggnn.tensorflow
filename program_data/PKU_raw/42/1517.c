int main() {
	int n;
	scanf("%d", &n);
	int number[NUMBER];
	int i=0;
	int count=0;
	while(i<n)
	{
		scanf("%d", &number[i]);
		i++;
	}
	int k;
	scanf("%d", &k);
	i=0;
	int j=0;
	while(i<n)
	{
		if(number[i]==k)
		{
			count++;
			while((i+j)<n)
			{
			   number[i+j]=number[i+j+1];
			   j++;
			}
		}
		else
		{
			i++;
		}
		j=0;

	}
	i=0;
	while(i<(n-count))
	{
		if(i==0)
		{
			printf("%d", number[i]);
			i++;
		}
		else
		{
			printf(" %d", number[i]);
			i++;
		}
	}



	return 0;
}