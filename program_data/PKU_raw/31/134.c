struct student
{
	
/*char id[20];
	
char name[10];
	
char sex;
	
int age;
	
int score;
	
char addr[20];*/
	char s[100];
	
struct student *next;
};
int n;
struct student *creat(void)
{
	
struct student *head;
	
struct student *p1,*p2;
	
n=0;
	
p1=p2=(struct student *)malloc(LEN);
	
//scanf("%s",p1->id);
gets(p1->s);
	
/*while(p1->s!="end")*/
while(strcmp(p1->s,"end")!=0)
	
{
//printf(p1->s);	
//scanf("%s %c %d %d %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->addr);
	
n++;
	
	
if(n==1) p1->next=NULL;
	
	
else p1->next=p2;
	
	
p2=p1;
	
	
p1=(struct student *)malloc(LEN);
	
	
//scanf("%s",p1->id);
gets(p1->s);
	
}
//printf(p1->s);	
head=p2;
	//printf(p2->s);
	
return(head);
}
void print(struct student *head)
{
	
struct student *p;
	
p=head;
//printf(p->s);
	
if(head!=NULL)
	
	
do
	
	
{
	
	
	
//printf("%s %s %c %d %d %s",p->id,p->name,p->sex,p->age,p->score,p->addr);
	if (p->next != NULL)
	{
		printf(p->s);
		printf("\n");
	}
	else
		printf(p->s);
	
	
	
p=p->next;
	
	
}while(p!=NULL);
}
void main()
{
	
struct student*head;
	
head=creat();
	
print(head);
}
