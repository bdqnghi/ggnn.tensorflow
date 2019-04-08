struct people
{
	char ID[10];
	int age; 
};
void main()
{
	int n, i, t;
    struct people peo[100];
	struct people old[100];
	void bubble(struct people a[100], int n);

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", peo[i].ID);
		scanf("%d", &peo[i].age);
	}

	t = 0;
	for(i=0; i<n; i++)
	{
		if(peo[i].age>=60)
		{
			strcpy(old[t].ID, peo[i].ID);
			old[t].age = peo[i].age;
			t++;
		}
		else
			continue;
	}
	bubble(old, t);
	for(i=0; i<t; i++)
		printf("%s\n", old[i].ID);

	for(i=0; i<n; i++)
	{
		if(peo[i].age<60)
			printf("%s\n", peo[i].ID);
	}

}

void bubble(struct people a[100], int n)
{
	int i, j;
	struct people t;
	for(i=1; i<n; i++)
		for(j=0; j<n-i; j++)
		{
			if(a[j].age<a[j+1].age)
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
}