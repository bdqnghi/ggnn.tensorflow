int n;
struct student
{
	char a[30];
	char name[20];
	char sex[20];
	char age[20];
	char score[20];
	char addr[30];
	struct student *next;
}

 *creat(void)
{ 
	struct student *head;
	struct student *p1,*p2;
    n=0;
	p1=p2=(struct student*) malloc(len);
	scanf("%s%s%s%s%s%s",p1->a,p1->name,p1->sex,p1->age,p1->score,p1->addr);
	head=NULL;
	while(strcmp(p1->a,"end")!=0)
	{  n++;
	   if (n==1) p1->next=NULL;
	   else 
	   p1->next=p2;
	   head=p1;
	   p2=p1;
	   p1=(struct student*)malloc(len);
	   scanf("%s%s%s%s%s%s",p1->a,p1->name,p1->sex,p1->age,p1->score,p1->addr);
	}
	return(head);
}
void print(struct student*head)
{
	struct student *p1;
	p1=head;
	if(head!=NULL)
		 do
		 {
			 printf("%s %s %s %s %s %s\n",p1->a,p1->name,p1->sex,p1->age,p1->score,p1->addr);
			 p1=p1->next;
		 }while(p1!=NULL);
}
main()
{
	struct student *head;
	head=creat();
	print(head);
}
	

