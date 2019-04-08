int n;
struct student
{
	char num[10];
	char name[20];
	char sex[2];
	int year;
	int score[10];
	char add[10];
	struct student *next;
};
struct student *creat()
 {
	 struct student *head,*p1,*p2;
	 p1=(struct student*)malloc(LEN);
	 scanf("%s %s %s %d %s %s",p1->num,p1->name,p1->sex,&p1->year,p1->score,p1->add);
	 p1->next=NULL;
	 n=1;
	 head=p1;
	 p2=p1;
	 do
	 {
		 p1=(struct student*)malloc(LEN);
		 scanf("%s",p1->num);
		 if(strcmp(p1->num,"end")==0)break;
         scanf("%s %s %d %s %s",p1->name,p1->sex,&p1->year,p1->score,p1->add);
         p1->next=NULL;
		 p2->next=p1;
		 p2=p1;
		 n=n+1;
	 }while(1);
	 return(head);
 }
void main()
{
	struct student *head,*p,*q;
    head=creat();
	while(n!=0)
	{
		for(p=head;p->next!=NULL;)
		{
			q=p;
			p=p->next;
		}
		printf("%s %s %s %d %s %s\n",p->num,p->name,p->sex,p->year,p->score,p->add);
		n=n-1;
		q->next=NULL;
	}
}