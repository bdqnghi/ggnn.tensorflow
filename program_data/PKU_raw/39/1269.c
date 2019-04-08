struct student
{
	char name[25];
	int qmpj;
	int bjpy;
	char gb;
	char xb;
	int paper;
	int money;
};
void main()
{
	int n,i,total=0,c1,c2,c3;
	struct student stu[100];
    struct student *p,*m;
	scanf("%d",&n);
	for(p=stu;p<stu+n;p++)
	{
		scanf("%s%d%d%c%c%c%c%c%d",&((*p).name),&((*p).qmpj),&((*p).bjpy),&c1,&((*p).gb),&c2,&((*p).xb),&c3,&((*p).paper));
		p->money=0;
	}
    for(p=stu;p<stu+n;p++)
	{
		if(p->qmpj>80&&p->paper>0)
			p->money=p->money+8000;
		if(p->qmpj>85&&p->bjpy>80)
			p->money=p->money+4000;
		if(p->qmpj>90)
			p->money=p->money+2000;
		if(p->qmpj>85&&p->xb=='Y')
			p->money=p->money+1000;
		if(p->bjpy>80&&p->gb=='Y')
			p->money=p->money+850;
	}
	m=stu;
	for(p=stu;p<stu+n;p++)
	{
		if(p->money>m->money)
			m=p;
		total=p->money+total;
	}
	printf("%s\n%d\n%d\n",m->name,m->money,total);
}