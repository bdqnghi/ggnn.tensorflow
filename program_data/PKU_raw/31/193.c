struct student
{
            char str[50];
            struct student *next;
            };
struct student *creat()
{
       struct student *head=NULL,*p1,*p2;
       p1=p2=(struct student*)malloc(Len);
       gets(p1->str);
       while(strcmp(p1->str,"end")!=0)
       {
                           
                           if(head==NULL)head=p1;
                           else p2->next=p1;
                           p2=p1;
                           p1=(struct student*)malloc(Len);
                           gets(p1->str);
       }
       p2->next=NULL;
       return(head);
}

struct student *re(struct student *head)
{
       struct student *p1,*p2,*newhead=NULL,*n;
       do
       {p1=head;
       p2=NULL;
       while(p1->next!=NULL)p2=p1,p1=p1->next;
       if(newhead==NULL)newhead=p1,n=newhead->next=p2;
       n=n->next=p2;
       p2->next=NULL;
       }while(head->next!=NULL);
       return(newhead);
}


void print(struct student *head)
{
     struct student *p;
     p=head;
     while(p!=NULL)
     {       puts(p->str);
             p=p->next;}
     }
void main()
{
     struct student *head;
     head=creat();
     head=re(head);
     print(head);
     
 
}
