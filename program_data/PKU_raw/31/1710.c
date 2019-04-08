void main()
{
struct student{
char a[20];
char b[20];
char c;
int d;
float e;
char f[20];
struct student *next;
};
struct student *head,*p1,*p0;int n=0;
p1=(struct student*) malloc(LEN);
scanf("%s",p1->a);
head=p1;
p1->next=0;
while(strcmp(head->a,"end")!=0)
{
n++;
if(n>1) p1=p0;
scanf("%s %c %d %f %s",head->b,&head->c,&head->d,&head->e,head->f);
p0=(struct student*) malloc(LEN);
head=p0;
p0->next=p1;
scanf("%s",p0->a);
}
head=p1;
for(p1=head;(p1!=0)&&(strcmp(p1->a,"end")!=0);)
{
printf("%s %s %c %d %g %s\n",p1->a,p1->b,p1->c,p1->d,p1->e,p1->f);
p1=p1->next;
}
}