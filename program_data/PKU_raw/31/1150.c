char m[]="end";
struct student
{
 char studen[100];
 struct student *next;
};
 int n;
 struct student *creat(void)
 {
	 struct student *head,*p1,*p2;
	 n=0;
	 p1=p2=(struct student *)malloc(sizeof(struct student));
	 gets(p1->studen);
	 head=NULL;
	 while(strcmp(p1->studen,m)!=0)
	 {
      n=n+1;
	  if(n==1)head=p1;
	  else p2->next=p1;
	  p2=p1;
	  p1=(struct student *)malloc(sizeof(struct student));
	  gets(p1->studen);
	 }
	 p2->next=NULL;
	 return(head);
 }
 void print(struct student *head)
{
	 struct student *p,*q;
      p=q=head;/*p,q???????????*/
	  while(p->next!=NULL) 
      p=p->next;/*?p??????????????*/
    printf("%s\n",p->studen);
   while(1) 
   { 
   while(q->next!=p) 
     q=q->next;
     printf("%s\n",q->studen);
    p=q;
    q=head;
   if(p==head)
	   break; 
   }
 }
int main()
{   struct student *ahead;
	ahead=creat();
    print(ahead);
}
