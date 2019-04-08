struct student
{
	char xuehao[10];
	char xingming[20];
	char xingbie;
	int nianling;
	float chengji;
	char dizhi[20];
	struct student *next;
};
struct student *creat()
{
	int n=0;
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	while(1)
	{
		scanf("%s",p1->xuehao);
		if(p1->xuehao[0]=='e') 
		{head=p2;
		break;}
		scanf("%s %c %d %f %s",p1->xingming,&p1->xingbie,&p1->nianling,&p1->chengji,p1->dizhi);
		if(n==0) p1->next=NULL;
		else p1->next=p2;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		n++;
	}
	return head;
}
int main()
{
	struct student *p;
	p=creat();
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->xuehao,p->xingming,p->xingbie,p->nianling,p->chengji,p->dizhi);
		p=p->next;
	}
	return 0;
}

