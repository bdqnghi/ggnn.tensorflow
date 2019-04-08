struct stu
{
	char nam[21];
/*	int sc1;
	int sc2;
	char mon;
	char wes;
	int pap;*/
	int sch;
	struct stu *next;
};

void main()
{
	int len,n,i,sc1,sc2,pap,sum=0;
	char mon,wes;
	len = sizeof (struct stu);
	scanf("%d",&n);
	struct stu *head,*p0;
	for (i=1;i<=n;i++)
	{
		p0 = (struct stu*)malloc(len);
		if (i==1)
			head = p0;
		scanf("%s %d %d %c %c %d",&p0->nam,&sc1,&sc2,&mon,&wes,&pap);
		p0->sch=0;
		if (sc1>80 && pap>0)
			p0->sch = p0->sch + 8000;
		if (sc1>85 && sc2>80)
			p0->sch = p0->sch + 4000;
		if (sc1>90)
			p0->sch = p0->sch + 2000;
		if (sc1>85 && wes=='Y')
			p0->sch = p0->sch + 1000;
		if (sc2>80 && mon=='Y')
			p0->sch = p0->sch + 850;
		sum = sum + p0->sch;
		if (p0->sch > head->sch)
			head = p0;
	}
	printf("%s\n%d\n%d\n",head->nam,head->sch,sum);

}
