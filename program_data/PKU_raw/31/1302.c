struct student
{
	char id[10];
	char name[20];
	char sex[2];
	int age;
	char s[10];
	char add[20];
	struct student *next;
};
struct student *creat(void)
{       
	struct student *head,*p1,*p2;
	int i=0;
	p1=p2=(struct student*)malloc(LEN);    
	head=NULL;       
	while(scanf("%s",p1->id)&&*p1->id>=48&&*p1->id<=57)     
	{                         
		scanf("%s%s%d%s%s",p1->name,p1->sex,&p1->age,p1->s,p1->add);
		if(i==0)head=p1;            
		else p2->next=p1;              
		p2=p1;           
		p1=(struct student *)malloc(LEN); 
		i++;
	} 
	p2->next=NULL;    
    return (head);
}
void turn(struct student *head)
{
	struct student *p1,*p2;
	p2=p1=head;
	while(head->next!=NULL)
	{
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		printf("%s %s %s %d %s %s\n",p1->id,p1->name,p1->sex,p1->age,p1->s,p1->add);
		p2->next=NULL;p1=head;
	}
printf("%s %s %s %d %s %s\n",p1->id,p1->name,p1->sex,p1->age,p1->s,p1->add);
}		
void main()
{
	struct student *head;
	head=creat();
	turn(head);
}

