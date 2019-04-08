struct data
{
	char name[21];
	int final;
	int assess;
	char servant;
	char west;
	int pub;
	int bonus;
}student[100], *medium;

void yuanshi(struct data *student)
{
	if(student->final>80&&student->pub>0)
		student->bonus=student->bonus+8000;
}

void wusi(struct data *student)
{
	if(student->final>85&&student->assess>80)
		student->bonus=student->bonus+4000;
}

void chengji(struct data *student)
{
	if(student->final>90)
		student->bonus=student->bonus+2000;
}

void xibu(struct data *student)
{
	if(student->final>85&&student->west=='Y')
		student->bonus=student->bonus+1000;
}

void banji(struct data *student)
{
	if(student->assess>80&&student->servant=='Y')
		student->bonus=student->bonus+850;
}

int main()
{
    int n;
	int i, j, index;
	int max=0, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s %d %d %c %c %d", student[i].name, &student[i].final, &student[i].assess, &student[i].servant, &student[i].west, &student[i].pub);
		student[i].bonus=0;
	}
	medium=student;
	for(i=0; i<n; i++)
	{
		banji(medium+i);
		xibu(medium+i);
		chengji(medium+i);
		yuanshi(medium+i);
		wusi(medium+i);
	}
	for(i=0; i<n; i++)
	{
		if(max<student[i].bonus)
		{
			max=student[i].bonus;
			index=i;
		}
		sum=sum+student[i].bonus;
	}
	printf("%s\n%d\n%d", student[index].name, max, sum);
	return 0;
}
