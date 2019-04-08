void main()
{
struct student 
{
int a;int math;int chi;int sum;struct student*next;
};
int n,i;int max;
struct student *p1,*p2,*head;
scanf("%d",&n);
head=NULL;
for(i=0;i<n;i++)
    {
       if(i==0) head=p1=(struct student*)malloc(LEN);
       else       { 
                   p1->next=(struct student*)malloc(LEN);p1=p1->next;
                    }
     scanf("%d%d%d",&p1->a,&p1->math,&p1->chi);
    p1->sum=(p1->math)+(p1->chi);
    }
p1->next=NULL;
for(i=0;i<3;i++)
{
p1=head;max=p1->sum;
do
{p1=p1->next;
if(p1->sum>max) {max=p1->sum;p2=p1;}
}while(p1->next!=NULL);
printf("%d %d\n",p2->a,p2->sum);
p2->sum=0;
}
}
