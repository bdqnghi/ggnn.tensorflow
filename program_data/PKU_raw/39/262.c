
struct student
{
char name[35];
int final;
int score;
char leader;
char west;
int paper;
int money;
struct student *next;
};

struct student *creat(void)
{
struct student *p,*q,*head;
int n,i=0;
scanf("%d",&n);

head=(struct student*)malloc(sizeof (struct student));
scanf("%s %d %d %c %c %d",&head->name,&head->final,&head->score,&head->leader,&head->west,&head->paper);
q=head;
p=head;

for(i=0;i<n;i++)
{
q=p;
q->money=0;
if ((q->final>80)&&(q->paper>0)) q->money=q->money+8000;
if ((q->final>85)&&(q->score>80)) q->money=q->money+4000;
if (q->final>90) q->money=q->money+2000;
if ((q->final>85)&&(q->west=='Y')) q->money=q->money+1000;
if ((q->score>80)&&(q->leader=='Y')) q->money=q->money+850;

if(i<n-1) 
{p=(struct student*)malloc(sizeof (struct student));
scanf("%s %d %d %c %c %d",&p->name,&p->final,&p->score,&p->leader,&p->west,&p->paper);
q->next=p;}
}

q->next=NULL;
return(head);
}

void main()
{
struct student *p,*q,*r;
int sum=0,max=0;
p=creat();

for(q=p;q!=NULL;)
{if (q->money>max) {max=q->money; r=q;}
sum=sum+q->money;
q=q->next;
}

printf("%s\n%d\n",r->name,r->money);
printf("%d",sum);
}

