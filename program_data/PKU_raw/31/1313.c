int n=0;
struct student
{
	char id[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student* next;
};
struct student *creat()
{
struct student* head,*pf,*ps;
pf= (struct student * ) malloc(sizeof(struct student));
ps=pf;					
scanf("%s",&pf->id);
while(pf->id[0]!='e')
{
	n++;
	scanf("%s %c %d %s %s",&pf->name,&pf->sex,&pf->age,&pf->score,&pf->address);
	if(n!=1)
	{
		pf->next=ps;
		ps=pf;
	}
	else pf->next=NULL;
	pf=(struct student*)malloc(sizeof(struct student));
	scanf("%s",&pf->id);
}
head=ps;
return head;
}
void print(struct student *head)
{
	int i;
	struct student *p;
	p=head;
	if(head!=NULL)
	for(i=0;i<n;i++)
	{
		printf("%s %s %c %d %s %s\n",p->id,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}
void main()
{
struct student *head;
head=creat();
print(head);
}
