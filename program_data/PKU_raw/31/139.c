struct stu{
	char no[10];
	char name[20];
	char gene;
	unsigned int age;
	float score;
	char add[20];
	struct list *next;
};

struct stu *creat()
{
	struct stu *p1=NULL,*p2=NULL,*head;
	int n=0;
	do{
        p2=p1;
		p1=(struct stu*)malloc(sizeof(struct stu));
	    scanf("%s",p1->no);
		if(*p1->no=='e')    
		{
			head=p2;
			free(p1);
			break;
		}	
		scanf("%s %c %d %f %s\n",p1->name,&p1->gene,&p1->age,&p1->score,p1->add);
		if(n==0)p1->next=NULL;
		if(n!=0)p1->next=p2;
		n=1;
	}while(1);
	return head;
}

void print(struct stu *head)
{
	struct stu *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->no,p->name,p->gene,p->age,p->score,p->add);
		p=p->next;
	}
}

int main()
{
	struct stu *head;
	head=creat();
	print(head);
	return 0;
}