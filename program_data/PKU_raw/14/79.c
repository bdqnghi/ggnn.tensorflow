struct student
{
	int num;
	int score1;
	int score2;
	int score;
};

void main()
{
	int n;
	scanf("%d",&n);
	struct student stu[100000];
	struct student *p,*p1,*t1,*t2,*t3;
	int tem,tem1;
	for(p=stu;p<stu+n;p++)
	{
		scanf("%d %d %d",&p->num,&p->score1,&p->score2);
		p->score=p->score1+p->score2;
	}
	int max;
	for(p=stu,t1=stu,max=stu->score;p<stu+n;p++)
	{
		if(p->score>max) {t1=p;max=p->score;}
	}
	for(p=stu,t2=stu,max=stu->score;p<stu+n;p++)
	{
		if(p==t1) continue;
		if(p->score>max) {t2=p;max=p->score;}
	}
	for(p=stu,t3=stu,max=stu->score;p<stu+n;p++)
	{
		if((p==t1)||(p==t2)) continue;
		if(p->score>max) {t3=p;max=p->score;}
	}
	printf("%d %d\n",t1->num,t1->score);
	printf("%d %d\n",t2->num,t2->score);
	printf("%d %d\n",t3->num,t3->score);
}


	