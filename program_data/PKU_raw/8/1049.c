
void inputarray(int a[], int);
void place(int a[], int);
void combine(int a[], int b[], int, int);
void printarray(int a[], int);

int main(void)
{
	int array1[100], array2[100], m, n;
	scanf("%d%d",&m, &n);
	inputarray(array1, m);
	inputarray(array2, n);
	place(array1, m);
	place(array2, n);
	combine(array1, array2, m, n);
	printarray(array1, m + n);
	return 0;
} 

void inputarray(int array[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
}

void printarray(int array[], int n)
{
	printf("%d", array[0]);
	for(int i = 1; i < n; i++)
	{
		printf(" %d", array[i]);
	}
	printf("\n");
}

void place(int array[], int n)
{
	int mininum, temp;
	for(int i = 0; i < n - 1; i++)
	{
		mininum = i;
		for(int j = i + 1; j < n; j++)
		{
			mininum = array[j] < array[mininum]?  j : mininum;
		}
		temp = array[i]; 
		array[i] = array[mininum]; 
		array[mininum] = temp;
	}
}

void combine(int array1[], int array2[], int m, int n)
{
	for(int i = m; i < m + n; i++)
	{
		array1[i] = array2[i - m];
	} 
}