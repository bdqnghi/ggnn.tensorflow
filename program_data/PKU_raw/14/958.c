struct student{
		int xuehao;
		int yuwen;
		int shuxue;
		int mark;
		struct student *next;
};
int n;
struct student *creat(int max)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d %d %d",&p1->xuehao,&p1->yuwen,&p1->shuxue);
	head=p1;
	while(n<max-1)
	{
		n++;
		if(n!=1)p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%d %d %d",&p1->xuehao,&p1->yuwen,&p1->shuxue);

	}
	p2->next=p1;
	p1->next=0;
	return head;
}
void main()
{
	int max,i;
	struct student *table;
	scanf("%d",&max);
	table=creat(max);
	for(i=0;i<3;i++)
	{
		int mmax=0;
		int mark=0;
		struct student *p;
		p=table;
		
		do{
		if(p->shuxue+p->yuwen>mmax&&p->mark!=-1){mark++;p->mark=mark;mmax=p->shuxue+p->yuwen;}
		p=p->next;
		}while(p!=0);
		p=table;
		do{
			if(p->mark==mark){
				printf("%d %d\n",p->xuehao,p->shuxue+p->yuwen);
			p->mark=-1;}
					p=p->next;
		}while(p!=0);

	}
}


