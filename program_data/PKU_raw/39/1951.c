struct student{
char name[20];
int a1;
int a2;
char b1;
char b2;
int c;
int money;
}stu[100];
void main()
{
	int n,i,max=0,m=0;
	struct student *p;
	scanf("%d",&n);
	for(p=stu;p<stu+n;p++)
	{
		scanf("%s %d %d %c %c %d",p->name,&p->a1,&p->a2,&p->b1,&p->b2,&p->c);
		 p->money=0;
		if(p->a1>80&&p->c>=1) p->money=p->money+8000;
        if(p->a1>85&&p->a2>80) p->money=p->money+4000;
		if(p->a1>90) p->money=p->money+2000;
		if(p->a1>85&&p->b2=='Y') p->money=p->money+1000;
		if(p->a2>80&&p->b1=='Y') p->money=p->money+850;
	}
	for(p=stu;p<stu+n;p++)
    if(p->money>max) max=p->money;
	for(p=stu;p<stu+n;p++)
	if (p->money==max) 
	{printf("%s\n%d\n",p->name,p->money);
	break;}
	for(p=stu;p<stu+n;p++)
		m=m+p->money;
	printf("%d",m);
}