struct Student
{
long id;
int chn;
int mth;
int total;
};
void main()
{
struct Student *p1,*top1,*top2,*top3,*temp;
int i;
long int n;
scanf("%ld",&n);

top1=(struct Student*)malloc(sizeof(struct Student));
top2=(struct Student*)malloc(sizeof(struct Student));
top3=(struct Student*)malloc(sizeof(struct Student));
temp=(struct Student*)malloc(sizeof(struct Student));
scanf("%d %d %d",&top1->id,&top1->chn,&top1->mth);
top1->total=top1->chn + top1->mth;
scanf("%d %d %d",&top2->id,&top2->chn,&top2->mth);
top2->total=top2->chn + top2->mth;
if(top2->total>top1->total)
{
temp=top2;
top2=top1;
top1=temp;
}
scanf("%d %d %d",&top3->id,&top3->chn,&top3->mth);
top3->total=top3->chn + top3->mth;
if(top3->total>top2->total)
{
temp=top3;
top3=top2;
top2=temp;
}
if(top2->total>top1->total)
{
temp=top2;
top2=top1;
top1=temp;
}
for(i=3;i<n;i++)
{
p1=(struct Student*)malloc(sizeof(struct Student));
scanf("%d %d %d",&p1->id,&p1->chn,&p1->mth);
p1->total=p1->chn + p1->mth;
if (top1->total< p1->total) {top3=top2;top2=top1;top1=p1;continue;}
if (top2->total< p1->total) {top3=top2;top2=p1;continue;}
if (top3->total< p1->total) {top3=p1;continue;}
free (p1);
}
printf("%d %d\n%d %d\n%d %d\n",top1->id,top1->total,top2->id,top2->total,top3->id,top3->total);
}