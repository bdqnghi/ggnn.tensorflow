void main()
{
	
	struct st
	{
		char num[500];
		char name[500];
		char sex;
		int age;
		double mark;
		char adress[500];
		struct st *next;
	}*p,*p1,*p2;
	p2=NULL;
	
	while(1)
	{   p1=(struct st*)malloc(sizeof(struct st));p1->next=p2;p2=p1;
		scanf("%s",p1->num);if(strcmp("end",p1->num)==0){p=p1->next;break;}
		scanf("%s %c %d %lf %s",p1->name,&p1->sex,&p1->age,&p1->mark,p1->adress);
		
	}
	
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->mark,p->adress);
		p=p->next;
	}
}