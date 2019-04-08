
int s[10][10];
int tag[10][10];

int main()	{
	int i, j;
	int a, b;
	scanf("%d,%d", &a,&b);
	for(i = 0; i < a; i ++)	{
		for(j = 0; j < b; j ++)	{
			scanf("%d", &s[i][j]);
			tag[i][j] = 0;
		}
	}

	for(i = 0; i < a; i ++)	{
		int cur_max = s[i][0];
		int cur_b = 0;
		for(j = 1; j < b; j ++)	{
			if(s[i][j] > cur_max)	{
				cur_max = s[i][j];
				cur_b = j;
			}
		}
		tag[i][cur_b] = 1;
	}

	for(i = 0; i < b; i ++)	{
		int cur_min = s[0][i];
		int cur_a = 0;
		for(j = 1; j < a; j ++)	{
			if(s[j][i] < cur_min)	{
				cur_min = s[j][i];
				cur_a = j;
			}
		}
		if(tag[cur_a][i] == 1)	{
			printf("%d+%d\n", cur_a, i);
			break;
		}
	}
	if(i == b)	{
		printf("No\n");
	}
	return 0;
}







			