struct student
{
	char num[20],na[30],sex[2],sc[10],old[3],ad[20];

	struct student *next;
};
int n;
void main()
{
	struct student *head,*p1,*p2,*p;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	head=NULL;
	while(scanf("%s",p1->num),p1->num[0]!='e')
	{
        
		n=n+1;
		head=p1;
		if(n>1)
		   p1->next=p2;
		else
           p1->next=NULL;
		p2=p1;
        scanf("%s%s%s%s%s",p1->na,p1->sex,p1->old,p1->sc,p1->ad);
		p1=(struct student *)malloc(LEN);
		
	}
	
    p=head;
    while(p!=NULL)
	{ 
		printf("%s %s %s %s %s %s\n",p->num,p->na,p->sex,p->old,p->sc,p->ad);
        p=p->next;
	};
}