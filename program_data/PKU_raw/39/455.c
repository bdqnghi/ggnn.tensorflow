

struct student
{
	char name[30];
	int exam;
	int result;
	char gan[2];
	char xibu[2];
	int lecture;
	int bonus;
};


void main()
{
	int n,i,sum=0;
	struct student Max;
	scanf("%d" ,&n);
	struct student *stu;
	stu = (struct student *)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %s %s %d" ,stu[i].name,&stu[i].exam,&stu[i].result,&stu[i].gan,&stu[i].xibu,&stu[i].lecture);

	}
	for(i=0;i<n;i++)
	{
		stu[i].bonus=0;
		if(((stu[i].exam)>80)&&((stu[i].lecture)>0))
		{
			stu[i].bonus+=8000;
		}
		if(((stu[i].exam)>85)&&((stu[i].result)>80))
		{
			stu[i].bonus+=4000;
		}
		if((stu[i].exam)>90)
		{
			stu[i].bonus+=2000;
		}
		if(((stu[i].exam)>85)&&((stu[i].xibu[0])=='Y'))
		{
			stu[i].bonus+=1000;
		}
		if(((stu[i].result)>80)&&((stu[i].gan[0])=='Y'))
		{
			stu[i].bonus+=850;
		}
	}
	Max=stu[0];
	for(i=1;i<n;i++)
	{
		if(stu[i].bonus>Max.bonus)
			Max=stu[i];
	}
	printf("%s\n" ,Max.name);
    printf("%d\n" ,Max.bonus);
	for(i=0;i<n;i++)
	{
		sum+=stu[i].bonus;
	}
	printf("%d\n" ,sum);
	free(stu);
}

