main()
{
	int n,i,k,sut=0,sum=0;
	struct
	{
		char na[21];
		int sc;
		int op;
		char ga;
		char we;
		int nu;
		int su;
	}stu[100];
	for (i=0;i<100;i++)
	{
		stu[i].su=0;
	}
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",stu[i].na);
		scanf("%d",&stu[i].sc);
		scanf("%d ",&stu[i].op);
		scanf("%c ",&stu[i].ga);
		scanf("%c",&stu[i].we);
		scanf("%d",&stu[i].nu);
	}
	for (i=0;i<n;i++)
	{
		if ((stu[i].sc>80)&&(stu[i].nu>0))
			stu[i].su+=8000;
		if ((stu[i].sc>85)&&(stu[i].op>80))
			stu[i].su+=4000;
		if (stu[i].sc>90)
			stu[i].su+=2000;
		if ((stu[i].sc>85)&&(stu[i].we=='Y'))
			stu[i].su+=1000;
		if ((stu[i].op>80)&&(stu[i].ga=='Y'))
			stu[i].su+=850;
	}
	for (i=0;i<n;i++)
	{
		if (sut<stu[i].su)
		{
			k=i;
			sut=stu[i].su;
		}
	}
	for (i=0;i<n;i++)
		sum+=stu[i].su;
	printf("%s\n%d\n%d\n",stu[k].na,sut,sum);
}