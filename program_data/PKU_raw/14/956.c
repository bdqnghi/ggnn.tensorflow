struct Student
{
long id;
int chn;
int mth;
int total;
struct Student *next;
};

struct Student * insert(struct Student *head,struct Student *stu)
{
int j=0;
struct Student *p0,*p1,*p2;
p1=head;
p0=stu;
if(head==NULL)
{head=p0;p0->next=NULL;}
else
{
while((p0->total<=p1->total)&&(p1->next!=NULL)&&j<4)
{p2=p1;p1=p1->next;j++;}
if(p0->total>p1->total)
{
if(head==p1) head=p0;
else p2->next=p0;
p0->next=p1;
}
else
{p1->next=p0;p0->next=NULL;}
}
return(head);
}

void main()
{
struct Student *p1,*head,*stu;
long int i,n;
scanf("%ld",&n);

p1=head=(struct Student*)malloc(sizeof(struct Student));
scanf("%d %d %d",&head->id,&head->chn,&head->mth);
head->total=head->chn + head->mth;
head->next=NULL;
for(i=1;i<n;i++)
{
stu=(struct Student*)malloc(sizeof(struct Student));
scanf("%d %d %d",&stu->id,&stu->chn,&stu->mth);
stu->total=stu->chn + stu->mth;
head=insert(head,stu);
}
p1=head;
for(i=0;i<3;i++)
{printf("%d %d\n",p1->id,p1->total);p1=p1->next;}
}