
struct book
{
int number;
char a[26];
int la;
struct book *next;
};

struct book *insert(struct book *head,struct book *temp)
{
struct book *p0,*p1,*p2;
p1=head;
p0=temp;
if(head==NULL)
 {head=p0;p0->next=NULL;}
else
 {
 while(p1->next!=NULL)
 {p1=p1->next;}
 p1->next=p0;
 p0->next=NULL;
 }
return head;
}



void main()
{
struct book *p,*temp,*head=NULL;
int i,m,max;
int b[26]={0};
char writer;
scanf("%d",&m);
for(i=0;i<m;i++)
{
temp=(struct book *)malloc(sizeof(struct book));
scanf("%d ",&temp->number);
gets(temp->a);

temp->la=strlen(temp->a);
temp->next=NULL;
head=insert(head,temp);
}

p=head;
while(p!=NULL)
{
for(i=0;i<p->la;i++)
b[p->a[i]-65]++;
p=p->next;

}
max=b[0];writer=65;
for(i=0;i<26;i++)
{
 if(b[i]>max) 
 {
  max=b[i];
  writer=i+65;
 }
}

printf("%c\n%d\n",writer,max);

p=head;
while(p!=NULL)
{
for(i=0;i<p->la;i++)
if(p->a[i]==writer)
{printf("%d\n",p->number);break;}
p=p->next;
}



}