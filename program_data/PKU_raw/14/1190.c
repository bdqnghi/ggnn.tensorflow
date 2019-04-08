struct stu{
int ID;
int yuwen;
int shuxue;
int sum;
struct stu *next;};

struct stu *creat(long n)
{long i;
 struct stu *p,*q,*head;
 p=(struct stu *)malloc(LEN);
 head=q=p;
 scanf("%d %d %d",&p->ID,&p->yuwen,&p->shuxue),p->sum=p->shuxue+p->yuwen;
 for(i=1;i<n;i++)
 { p=(struct stu *)malloc(LEN);
   scanf("%d %d %d",&p->ID,&p->yuwen,&p->shuxue),p->sum=p->shuxue+p->yuwen;
   q->next=p,q=p;}
 p->next=NULL;
 return(head);
}

int main()
{
 long i,n;
 scanf("%ld",&n);
 struct stu *h,*p,*q1,*q2,*q3;
 h=creat(n);
 int m1,m2,m3;
 for(p=h,m1=p->sum;p!=NULL;p=p->next)
 if(p->sum>m1)  m1=p->sum,q1=p;
 printf("%d %d",q1->ID,q1->sum);
 for(p=h,m2=p->sum;p!=NULL;p=p->next)
 if(p->sum>m2&&p!=q1)  m2=p->sum,q2=p;
 printf("\n%d %d",q2->ID,q2->sum);
 for(p=h,m3=p->sum;p!=NULL;p=p->next)
 if(p->sum>m3&&p!=q1&&p!=q2)  m3=p->sum,q3=p;
 printf("\n%d %d",q3->ID,q3->sum);
}


