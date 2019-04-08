

struct pat
{
 char *id;
 int a;
 int o;
 struct pat *next;
};
int n;

int main()
{
    struct pat *create(int n);
    struct pat *arrange(struct pat *head);
    struct pat *head,*p;
    
    scanf("%d",&n);
    head=create(n);
    head=arrange(head);
    
    p=head;
    while(p!=NULL)
    {
     printf("%s",p->id);
     if(p->next!=NULL) printf("\n");
     p=p->next;
    }
} 

struct pat *create(int n)
{
 struct pat *head,*p1,*p2;
 int i;
 p2=head=MLCP;
 
 for(i=1;i<=n;i++)
 {
  p1=MLCP;
  p1->id=MLCI;
  scanf("%s %d",p1->id,&p1->a);
  p1->o=i;
  
  p2->next=p1;
  p2=p1;
 }
 p2->next=NULL;
 
 return head;
}

struct pat *arrange(struct pat *head)
{
     void sort(struct pat *hn);
     
     struct pat *p1,*p2,*hn,*n1;
     
     n1=hn=MLCP;
     
     p2=head;p1=head->next;
     while(p1!=NULL)
     {
      if(p1->a >=60)
      {
       p2->next=p1->next;
       n1->next=p1;n1=p1;
       
       p1=p2->next;
      }
      else {p1=p1->next;p2=p2->next;}
     }
     n1->next=NULL;
     sort(hn);
     
     n1->next=head->next;
     head=hn->next;
     
     return head;
}

void sort(struct pat *hn)
{
   struct pat *p1,*p2;
   char *tid;
   int ta,to;
   
   p1=hn->next;
   while(p1!=NULL)
   {
    p2=p1->next;
    while(p2!=NULL)
    {
     if(p2->a > p1->a || (p2->a==p1->a && p2->o < p1->o))
     {
      tid=p2->id;p2->id=p1->id;p1->id=tid;
      ta=p2->a;p2->a=p1->a;p1->a=ta;
      to=p2->o;p2->o=p1->o;p1->o=to;
      }
     p2=p2->next;
    }
    p1=p1->next;
   }
}
