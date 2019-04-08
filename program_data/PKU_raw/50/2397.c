
int main()
{
	int w = 0;
	int i = 0;
	int day = 13;
	int monthDiffer[12] = { 0, 31, 28, 31, 30, 31, 
										30, 31, 31, 30, 31, 30 };
	scanf("%d", &w);

	w = (day - 1 + w) % 7;	// 0???????
	for(i=0; i < 12; i++)
	{
		w = (w + monthDiffer[i]) % 7;
		if(w == 5)
			printf("%d\n", i+1);
	}

	return 0;
}