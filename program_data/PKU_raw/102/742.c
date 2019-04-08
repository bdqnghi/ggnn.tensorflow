

int n = 0;
int malecnt = 0;
int femalecnt = 0;
double male[50];
double female[50];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i = 0;
	char s[10];
	double temp = 0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s %lf", s, &temp);
		if(strcmp(s, "male") == 0)
		{
			male[malecnt++] = temp;
		}
		else
		{
			female[femalecnt++] = temp;
		}
	}

	sort(male, male+malecnt);
	sort(female, female+femalecnt);

	for(i=0; i<malecnt; i++)
	{
		printf("%.2lf ", male[i]);
	}

	for(i=femalecnt-1; i>=1; i--)
	{
		printf("%.2lf ", female[i]);
	}
	printf("%.2lf\n", female[0]);
	return 0;
}