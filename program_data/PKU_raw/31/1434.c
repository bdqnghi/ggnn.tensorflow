
struct student
{
	char information[200];
	struct student *next;
};
struct student *creat(void)
{
	int n=0;
	struct student *head;
	struct student *p1,*p2;
	p1=(struct student *)malloc(LEN);
	gets(p1->information);
	p1->next=NULL;
	p2=p1;
		do
		{
			p1=(struct student *)malloc(LEN);
			gets(p1->information);
			if(strcmp(p1->information,"end")==0)
			{
				free(p1);
				head=p2;
				break;
			}
			else
			{
				p1->next=p2;
				head=p1;
				p2=p1;
			}
		}
		while(1);
	
	
	return(head);
}

void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
	{
		do
		{
			puts(p->information);
			p=p->next;
		}
		while(p!=NULL);
	}
}
void main()
{
	struct student *head;
	head=creat();
	print(head);
}
