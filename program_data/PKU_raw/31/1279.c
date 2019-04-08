
struct student
{
	 char num[20];
	 char name[20];
	 char sex;
	 int age;
	 char score[10];
	 char add[30];
	 struct student *next;
}*p1,*p2;

struct student *input(void)
{
	char temp[100]={0};
	struct student *head=NULL;

	while(gets(temp))
	 {
		if(strcmp(temp,"end")==0)break;
	    p1=(struct student *)malloc(sizeof(struct student));
	    sscanf(temp,"%s%s %c %d %s%s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->add);
  
	    if(head==NULL)
		{
			head=p1,p2=p1;
		}
	    else
		{ 
			p2->next=p1;
			p2=p1;
			p2->next=NULL;
		}
	 }
	 return(head);
} 

struct student *sort(struct student *head)
{
 struct student *n,*newhead=NULL;
	 do
	 {
		  p2=NULL;
		  p1=head;
		  while(p1->next!=NULL) p2=p1,p1=p1->next;
		  if(newhead==NULL)
		   newhead=p1,n=newhead->next=p2; 
		  n=n->next=p2;
		  p2->next=NULL;
	 }while(head->next!=NULL);
	
	 return(newhead);
}

void output(struct student *outhead)
{
	for(p1=outhead;p1!=NULL;p1=p1->next)
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
}

int main()
{
	 struct student *head;
	 head=input();
	 head=sort(head);
	 output(head);
	 printf("\n");
	 return 0;
}
