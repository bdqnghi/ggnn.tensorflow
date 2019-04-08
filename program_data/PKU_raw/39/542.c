void main()
{
	int n, i, sum, z;

	struct student
	{
		char name[20];
		int exam;
		int cla;
		char lead;
		char west;
		int theo;
		int sch;
	};
	struct student stu[100];

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", stu[i].name);
		scanf("%d", &stu[i].exam);
		scanf("%d %c %c %d", &stu[i].cla, &stu[i].lead, &stu[i].west, &stu[i].theo);
	}

	for(i=0; i<n; i++)
	{
		stu[i].sch = 0;
		if(stu[i].exam>80 && stu[i].theo>0)
			stu[i].sch = stu[i].sch + 8000;
		if(stu[i].exam>85 && stu[i].cla>80)
			stu[i].sch = stu[i].sch + 4000;
		if(stu[i].exam>90)
			stu[i].sch = stu[i].sch + 2000;
		if(stu[i].exam>85 && stu[i].west=='Y')
			stu[i].sch = stu[i].sch + 1000;
		if(stu[i].cla>80 && stu[i].lead=='Y')
			stu[i].sch = stu[i].sch + 850;
	}

	z = 0;
	for(i=0; i<n; i++)
	{
		if(stu[i].sch>stu[z].sch)
			z = i;
	}

	sum = 0;
	for(i=0; i<n; i++)
		sum = sum + stu[i].sch;

	printf("%s\n", stu[z].name);
	printf("%d\n", stu[z].sch);
	printf("%d\n", sum);
}
