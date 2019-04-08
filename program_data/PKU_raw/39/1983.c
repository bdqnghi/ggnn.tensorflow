void main()
{
	int i,n,max=0;
	unsigned long sum=0;
	struct student
	{
		char name[21];			//??
		int mark;				//??????
		int evaluation;			//??????
		char cadre;				//????
		char west;				//??????
		int thesis;				//???
		int scholarship;		//???
	};
	scanf("%d",&n);
	struct student *p = (struct student*)malloc(n * sizeof(struct student));
	for(i=0; i<n; i++)
	{
		struct student *q;
		q = p + i;
		q->scholarship = 0;
		scanf("%s %d %d %c %c %d",&(q->name),&(q->mark),&(q->evaluation),&(q->cadre),&(q->west),&(q->thesis));
		if(q->mark>80 && q->thesis>0)
			q->scholarship += 8000;			//?????
		if(q->mark>85 && q->evaluation>80)
			q->scholarship += 4000;			//?????
		if(q->mark>90)
			q->scholarship += 2000;			//?????
		if(q->mark>85 && q->west=='Y')
			q->scholarship += 1000;			//?????
		if(q->evaluation>80 && q->cadre=='Y')
			q->scholarship += 850;			//?????
		sum += q->scholarship;
	}
	for(i=1; i<n; i++)
	{
		if((p+i)->scholarship > (p+max)->scholarship)
			max = i;
	}
	printf("%s\n%d\n%d",(p+max)->name,(p+max)->scholarship,sum);
}