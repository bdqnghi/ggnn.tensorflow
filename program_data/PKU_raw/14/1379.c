struct student
{
int num;
int yuwen;
int shuxue;
struct student *next;
};
int m;

void main()
{
int n;
scanf("%d",&n);

struct student *creat(int n);
void print(struct student *head,int n);

struct student *head;
head=creat(n);
print(head,n);
print(head,n);
print(head,n);
}

struct student *creat(int n)
{
struct student *head;
struct student *p1,*p2;
m=0;
p1=p2=(struct student*)malloc(LEN);
scanf("%d %d %d\n",&p1->num,&p1->yuwen,&p1->shuxue);
head=NULL;
for(;n!=0;n--)
{
 m+=1;
 if(m==1)head=p1;
 else p2->next=p1;
 p2=p1;
 p1=(struct student*)malloc(LEN);
 scanf("%d %d %d\n",&p1->num,&p1->yuwen,&p1->shuxue);
 }
p2->next=NULL;
return(head);
}


void print(struct student *head,int n)
{
struct student *p,*q;
p=head;
int max=0,index=0;
for(;n!=0;n--)
{
 if(max<((p->yuwen)+(p->shuxue)))
 {
 max=((p->yuwen)+(p->shuxue));
 index=p->num;
 q=p;
  }
 p=p->next;
 }
printf("%d %d\n",index,max);
q->yuwen=0;
q->shuxue=0;
}