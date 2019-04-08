struct stu
{char num[200];
int qimo;
int banji;
char gan;
char sheng;
int lun;
int qian;
struct stu * next;
};
void sort(struct stu * head,struct stu * q)
{
	struct stu *pre=head,*p=pre->next,*s;
	s=(struct stu *)malloc(sizeof(struct stu));
	s->banji=q->banji;strcpy(s->num,q->num);s->qimo=q->qimo;s->qian=q->qian;s->sheng=q->sheng;s->gan=q->gan;
	s->next=NULL;
	while((p!=NULL)&&(s->qian<=p->qian))
	{
		pre=p;
		p=p->next;
	}
	pre->next=s;
	s->next=p;
}
void main()
{
	int n,k,i,all,tol=0;
	float m;
	char num[20];
	struct stu *head;
	struct stu *p,*q;
	head=(struct stu *)malloc(sizeof(struct stu));
	head->next=NULL;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{	 all=0;
		 p=(struct stu *)malloc(sizeof(struct stu));
		 scanf("%s %d %d %c %c %d",p->num,&p->qimo,&p->banji,&p->gan,&p->sheng,&p->lun);
         if((p->qimo>80)&&(p->lun>0)) all=all+8000;
		 if((p->qimo>85)&&(p->banji>80)) all=all+4000;
		 if(p->qimo>90) all=all+2000;
		 if((p->qimo>85)&&(p->sheng=='Y')) all=all+1000;
		 if((p->banji>80)&&(p->gan=='Y')) all=all+850;
		 p->qian=all;
		 tol=tol+all;
         sort(head,p);
	}
	p=head->next;
	printf("%s\n",p->num);
	printf("%d\n",p->qian);
	printf("%d\n",tol);
}