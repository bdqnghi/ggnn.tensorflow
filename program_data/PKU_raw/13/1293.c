int main() {
	int n;
	scanf("%d", &n);
	int number[NUMBER];
	int i;
	i=0;
	while(i<n)
	{
		scanf("%d", &number[i]);
		i++;
	}
	i=1;
	int j=0;
	printf("%d", number[0]);
	while(i<n)
	{
		while(j<i)
		{
		   if(number[i]==number[j])
		   {
			    break;
		   }
		   else
		   {
			   j++;
		   }
		   if(j==i)
		   {
			   printf(" %d", number[i]);
		   }
		}
		j=0;
		i++;
	}
	return 0;
}