
struct student{
       char stu[50];
       struct student *next; 
};

struct student *Create();
void Insert(struct student *head,struct student *newnode);
void Print(struct student *head);

int main(){
	struct student tmp;
	struct student *head;
	
	head=Create();
	gets(tmp.stu);
	while(strcmp(tmp.stu,"end")!=0){
		Insert(head,&tmp);
		gets(tmp.stu);
	}
	Print(head);
	
	return 0;
}

struct student *Create()
{
	struct student *p;
	
	p=(struct student *)malloc(sizeof(struct student));
	strcpy(p->stu,"0"); 
	p->next=NULL;

	return p;
}

void Insert(struct student *head,struct student *tmp)
{
	struct student *p;
	struct student *newnode;
	
	p=head;
	while(p->next!=NULL)
		p=p->next;
	newnode=(struct student *)malloc(sizeof(struct student));
	p->next=newnode;
	strcpy(newnode->stu,tmp->stu);
	newnode->next=NULL;
}

void Print(struct student *head)
{
	if(head->next!=NULL)
		Print(head->next);
	if(strcmp(head->stu,"0")!=0)  
		printf("%s\n",head->stu);
}
