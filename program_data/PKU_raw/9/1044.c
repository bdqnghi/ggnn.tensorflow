struct stu
{char num[20];
int score;
struct stu * next;
};
void sort(struct stu * head,struct stu * q)
{
	struct stu *pre=head,*p=pre->next,*s;
	s=(struct stu *)malloc(sizeof(struct stu));
	s->score=q->score;strcpy(s->num,q->num);
	s->next=NULL;
	if(s->score>=60){
	while((p!=NULL)&&(q->score<=p->score))
	{
		pre=p;
		p=p->next;
	}
	pre->next=s;
	s->next=p;}
	else
	{while((p!=NULL))
	{
		pre=p;
		p=p->next;
	}
	pre->next=s;
	s->next=p;}
}
void print(struct stu *head)
{
	struct stu *p;
	int i=0;
	p=head;
	while(p!=NULL)
	{
		
	
		printf("%s\n",p->num);
		p=p->next;
	}
	
}
main()
{
	int n,k,i;
	struct stu *head;
	struct stu *p;
	head=(struct stu *)malloc(sizeof(struct stu));
	head->next=NULL;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{	 
		 p=(struct stu *)malloc(sizeof(struct stu));
		 scanf("%s %d",p->num,&p->score);
         sort(head,p);
	}
	print(head->next);

}
