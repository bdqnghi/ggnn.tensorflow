


int speed[1024], ano[1024];

int fight(int myId, int anoId)
{
	if(speed[myId] < ano[anoId])
		return -1;
	else if(speed[myId] == ano[anoId])
		return 0;
	else
		return 1;
}

int main()
{
	int n;
	while(scanf("%d", &n) == 1 && n != 0)
	{
		int sum = 0;
		for(int i = 0; i < n; ++i)
			scanf("%d", speed + i);
		for(int i = 0; i < n; ++i)
			scanf("%d", ano + i);
		sort(speed, speed + n);
		sort(ano, ano + n);
		int myLow = 0, myHigh = n - 1, anoLow = 0, anoHigh = n - 1;
		while(myLow <= myHigh)
		{
			if(speed[myLow] > ano[anoLow])
			{
				sum += fight(myLow, anoLow);
				++myLow, ++anoLow;
			}
			else if(speed[myLow] < ano[anoLow])
			{
				sum += fight(myLow, anoHigh);
				++myLow, --anoHigh;
			}
			else if(speed[myHigh] > ano[anoHigh])
			{
				sum += fight(myHigh, anoHigh);
				--myHigh, --anoHigh;
			}
			else if(speed[myHigh] <= ano[anoHigh])
			{
				sum += fight(myLow, anoHigh);
				++myLow, --anoHigh;
			}
		}
		printf("%d\n", sum * 200);
	}
}