struct student
{
int num;
int chi;
int math;
int sum;
struct student *next;
};
int n,k;


void main()
{int i,j;
scanf("%d",&n);

int m;
m=0;
struct student *head;
struct student *p1,*p2;
p1=p2=(struct student *)malloc(len);
scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
p1->sum=p1->chi+p1->math;
head=p1;
while(m<n-1)
{m=m+1;
p1=(struct student *)malloc(len);
scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
p1->sum=p1->chi+p1->math;
p2->next=p1;
p2=p1;
}
p2->next=0;

struct student *max,*p;

for(i=0;i<3;i++)
{ max=head;
  p=p2=head;
  p1=p2;
  for(j=0;j<n-i;j++)
  { if(p1->sum>max->sum)
	   {max=p1;
	   p=p2;}
	 p2=p1;
	 p1=p2->next;}
  p1=p2=head;
  printf("%d %d\n",max->num,max->sum);
   if(max->num==head->num)
	   head=p1->next;
   else p->next=max->next;
}



}


