int main()
{
	struct student
	{
		char name[100];
		int qimo;
		int banji;
		char isGanbu[1];
		char isWest[1];
		int paper;
		int money;
	};
	struct student a[1000];
	int n, i, max, maxnum, sum;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		a[i].money = 0;
		scanf("%s", a[i].name);
		scanf("%d%d%s%s%d", &a[i].qimo, &a[i].banji, a[i].isGanbu, a[i].isWest, &a[i].paper);
		if(a[i].qimo > 80 && a[i].paper > 0)
			a[i].money += 8000;
		if(a[i].qimo > 85 && a[i].banji > 80)
			a[i].money += 4000;
		if(a[i].qimo > 90)
			a[i].money += 2000;
		if(a[i].qimo > 85 && a[i].isWest[0] == 'Y')
			a[i].money += 1000;
		if(a[i].banji > 80 && a[i].isGanbu[0] == 'Y')
			a[i].money +=850;
	}
	max = 0;
	sum = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i].money > max)
		{
			max = a[i].money;
			maxnum = i;
		}
	}
	for(i = 0; i < n; i++)
		sum += a[i].money;
	printf("%s\n",a[maxnum].name);
	printf("%d\n%d", max, sum);
	return 0;
}