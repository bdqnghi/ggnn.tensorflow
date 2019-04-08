int main ()
{
	int n, i = 0;
	int sum = 0;
    scanf("%d", &n);
	while(i <= n)
	{
		if(i % 7 == 0||(i + 3) % 10 == 0||i==70||i==71||i==72||i==73||i==74||i==75||i==76||i==77||i==78||i==79)
		{
			i++;
			continue;
		}
		sum = sum + i * i;
		i++;
	}
	printf("%d", sum);
	return 0;
}




