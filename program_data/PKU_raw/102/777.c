int male[45];
int female[45];
char ch[20];
int cmp1(const void *a, const void *b)
{
	int *temp1 = (int *)a;
	int *temp2 = (int *)b;
	
	return (int )(*temp1 - *temp2);
}
int cmp2(const void *a, const void *b)
{
	int *temp1 = (int *)a;
	int *temp2 = (int *)b;
	
	return (int )(*temp2 - *temp1);
}


int main()
{
	int n;
	cin >> n;
	int m = 0, f = 0;
	double h;
	for(int i = 0; i < n ; i++)
	{
		cin>>ch;
		if(strcmp(ch, "male") == 0)
		{
			cin>>h;
			male[m] =(int)( h * 10000);
			m++;
		}
		else
		{
			cin>>h;
			female[f] =(int)( h * 10000);
			f++;
		}

	}
	qsort(male, m  , sizeof(int), cmp1);
	qsort(female, f  , sizeof(int), cmp2);
	
	for(int i = 0; i < m; i ++)
		printf("%3.2lf ",male[i] / 10000.0);
	for(int i = 0; i < f - 1; i++)
		printf("%3.2lf ",female[i] / 10000.0);
	printf("%3.2lf",female[f - 1] / 10000.0);
	return 0;
}