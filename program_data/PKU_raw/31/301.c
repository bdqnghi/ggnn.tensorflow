struct student
{
char num[20];
char name[40];
char sex[10];
int age;
char score[20];
char addr[100];
struct student *next;
};
main()
{
struct student *head,*p1,*p;
int n=0;
p1=( struct student*) malloc(LEN);
scanf("%s%s%s%d%s%s",p1->num,p1->name,p1->sex,&p1->age,p1->score,p1->addr);
head=NULL;
while(strcmp(p1->num,"end")!=0)
{
n=n+1;
if(n==1) {head=p1;p1->next=NULL;}
else {p1->next=head;head=p1;}
p1=(struct student*)malloc(LEN);
scanf("%s%s%s%d%s%s",p1->num,p1->name,p1->sex,&p1->age,p1->score,p1->addr);
}
p=head;
do
{
printf("%s %s %s %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->addr);
p=p->next;
} while(p!=NULL);
} 