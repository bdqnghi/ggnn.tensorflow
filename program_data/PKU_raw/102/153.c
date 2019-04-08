
float man[40];
float woman[40];

int n;

int compare1(const void * a, const void *b)
{
	float * p = (float *)a;
	float * q = (float *)b;

	if(*p > *q)
		return 1;
	else
		return 0;
}

int compare2(const void * a, const void *b)
{
	float * p = (float *)a;
	float * q = (float *)b;

	if(*p > *q)
		return 0;
	else
		return 1;
}

int main()
{
	int i = 0, j =0, k = 0, x = 0, y = 0;
	char sex[10];
	float height;

	scanf("%d", &n);
	for(i = 0; i < n; ++i)
	{
		scanf("%s", sex);
		scanf("%f", &height);
		if(strcmp(sex, "female") == 0)
		{
			woman[j] = height;
			j += 1;
		}
		else
		{
			man[k] = height;
			k += 1;
		}
	}
	
	qsort(man, k, sizeof(float), compare1);
	qsort(woman, j, sizeof(float), compare2);

	for(i = 0; i < k; ++i)
	{
		printf("%.2f ", man[i]);
	}
	for(i = 0; i < j - 1; ++i)
	{
		printf("%.2f ", woman[i]);
	}
	printf("%.2f\n",woman[i]);
	return 0;
}