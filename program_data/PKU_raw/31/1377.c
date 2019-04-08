struct S
{
	char xuehao[200];
	char xingming[200];
	char xingbie;
	int nianling;
	float defen;
	char dizhi[200];
	struct S *next;
};
int main()
{
	struct S *p1,*p2,*head;
	head=(struct S *)malloc(sizeof(struct S));
	p1=head;
	scanf("%s",p1->xuehao);
	head->next=NULL;
	while(p1->xuehao[0]!='e')
	{
		scanf("%s %c%d%f %s",p1->xingming,&p1->xingbie,&p1->nianling,&p1->defen,p1->dizhi);
		p2=(struct S*)malloc(sizeof(struct S));
		p2->next=p1;
		p1=p2;
		scanf("%s",p1->xuehao);
	}
	while(p1->next!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p1->next->xuehao,p1->next->xingming,p1->next->xingbie,p1->next->nianling,p1->next->defen,p1->next->dizhi);
		p1=p1->next;
	}
	return 0;
}




