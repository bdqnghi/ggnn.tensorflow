
struct student{
	char num[10];
	char name[20];
	char gd;
	int age;
	float sc;
	char adr[10];
	struct student *next;
};

struct student *append()
{
	struct student *head,*p1,*p2=NULL;
	while(1)
	{
	 p1=(struct student*)malloc(sizeof(struct student));
     scanf("%s",p1->num);
     if (p1->num[0]=='e')
	 {
		head=p2;
		break;
      }
	 else
	 {
	   scanf("%s %c %d%f %s",p1->name,&p1->gd,&p1->age,&p1->sc,p1->adr);
       p1->next=p2;
	   p2=p1;
	 }
	}
    return head;
}


void main()
{
	struct student *p;
	p=append();
	for(;p!=NULL;p=p->next)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->gd,p->age,p->sc,p->adr);
	}
}

