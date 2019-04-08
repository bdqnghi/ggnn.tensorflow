
struct student
{
	char name[20];
	int qimo;
	int banji;
	char ganbu;
	char xibu;
	int lunwen;
	long int qian;
}stu[100];

void yunsuan(struct student *a)
{
	int sum=0;
	if(a->qimo >80&&a->lunwen >=1)
		sum+=8000;
	if(a->qimo >85&&a->banji >80)
		sum+=4000;
	if(a->qimo >90)
		sum+=2000;
	if(a->qimo>85 &&a->xibu =='Y')
		sum+=1000;
	if(a->ganbu =='Y'&&a->banji >80)
		sum+=850;
	a->qian =sum;
}

int max(struct student *pt,int n)
{
	int max=0,i,hz;
	for(i=0;i<n;i++)
	{
		if(pt->qian >max)
		{max=pt->qian ;
		hz=i;}
		pt++;
	}

	return hz;
}
		 

int main()
{
	int n,i,m,sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %ld", stu[i].name ,&stu[i].qimo, &stu[i].banji ,&stu[i].ganbu ,&stu[i].xibu ,&stu[i].lunwen );
		yunsuan(&stu[i]);
		sum+=stu[i].qian ;
	}

	m=max(stu,n);
	printf("%s\n%d\n%ld\n", stu[m].name ,stu[m].qian, sum);
	return 0;
}


	