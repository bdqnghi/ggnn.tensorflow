void main()
{
struct student{
int i;
int x;
int y;
int m;
struct student *next;
};
int n,j,k;
struct student *head,*p1,*p2,*p0;
scanf("%d",&n);
p1=(struct student*) malloc(LEN);
scanf("%d%d%d",&p1->i,&p1->x,&p1->y);
p1->m=p1->x+p1->y;
p2=(struct student*) malloc(LEN);
scanf("%d%d%d",&p2->i,&p2->x,&p2->y);
p2->m=p2->x+p2->y;
if(p1->m>p2->m)
{head=p1;p1->next=p2;p2->next=0;}
else{p0=p1;p1=p2;p2=p0;head=p1;p1->next=p2;p2->next=0;}
p0=(struct student*) malloc(LEN);
scanf("%d%d%d",&p0->i,&p0->x,&p0->y);
p0->m=p0->x+p0->y;
while((p0->m<=p1->m)&&(p1->next!=0))
{
p2=p1;p1=p1->next;	
}
if(p0->m>p1->m)
{
	if(head==p1) head=p0;else p2->next=p0;
	p0->next=p1;
}
else 
{
	p1->next=p0;p0->next=0;
}
for(j=3;j<n;j++)
{
p0=(struct student*) malloc(LEN);
scanf("%d%d%d",&p0->i,&p0->x,&p0->y);
p0->m=p0->x+p0->y;
for(k=0,p1=head;k<=2;k++)
{if(p0->m>p1->m) break; p1=p1->next;}
if (k==3) continue;
p1=p2=head;
while(p0->m<=p1->m)
{
p2=p1;p1=p1->next;	
}
if(p0->m>p1->m)
{
	if(head==p1) head=p0;else p2->next=p0;
	p0->next=p1;
}
else 
{
	p1->next=p0;p0->next=0;
}
}
for(p1=head,j=0;j<3;j++)
{
	printf("%d %d\n",p1->i,p1->m);
    p1=p1->next;
}
}
