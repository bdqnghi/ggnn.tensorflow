
struct stu
{
char name[20];
int mark1;
int mark2;
char gan;
char west;
int paper;
int money;
struct stu *next;
};

void main()
{
int i,n,max=0,sum=0;
struct stu *head,*p1,*p2,*p;
scanf("%d\n",&n);
p1=(struct stu*)malloc(sizeof(struct stu));
p2=p1;
head=p1;
scanf("%s %d %d %c %c %d\n",p1->name,&p1->mark1,&p1->mark2,&p1->gan,&p1->west,&p1->paper);
p1->money=0;
for(i=1;i<n;i++)
{
p1=(struct stu*)malloc(sizeof(struct stu));
p2->next=p1;
p2=p1;
scanf("%s %d %d %c %c %d\n",p1->name,&p1->mark1,&p1->mark2,&p1->gan,&p1->west,&p1->paper);
p1->money=0;
}
p2->next=NULL;
for(p=head;p!=NULL;p=p->next)
{
if((p->mark1>80)&&(p->paper>=1)){p->money+=8000;}
if((p->mark1>85)&&(p->mark2>80)){p->money+=4000;}
if(p->mark1>90){p->money+=2000;}
if((p->mark1>85)&&(p->west=='Y')){p->money+=1000;}
if((p->mark2>80)&&(p->gan=='Y')){p->money+=850;}
}
for(p=head;p!=NULL;p=p->next)
{
sum+=p->money;
if(p->money>max)
{max=p->money;}
}
for(p=head;p!=NULL;p=p->next)
{
if(p->money==max)
{printf("%s\n%d\n%d",p->name,p->money,sum);break;}
}
}