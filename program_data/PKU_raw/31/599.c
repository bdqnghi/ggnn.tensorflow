struct student
{
	char num[100];
	char name[100];
	char sex;
	int age;
	float score;
	char ad[100];
	struct student *next;
	struct student *former;
};
int n=1;
struct student *creat()
{
	struct student *thisnode,*newnode,*head;
	do
	{
	newnode=(struct student *)malloc(sizeof(struct student));
	scanf("%s",newnode->num);
	if(newnode->num[0]!='e')
	{
		scanf("%s %c%d%f%s",newnode->name,&newnode->sex,&newnode->age,&newnode->score,newnode->ad);
	   head=newnode;
	   if(n==1) newnode->former=NULL;
       else 
	   {
		thisnode->next=newnode;
		newnode->former=thisnode;
	   }
	   thisnode=newnode;
	   n=n+1;
	}
	else 
	{
		thisnode->next=NULL;
	}
	}while(newnode->num[0]!='e');
	return(head);
}
void main()
{
	struct student *p;
	p=creat();
	do
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->ad);
		p=p->former;
	}while(p!=NULL);
}




