int m=0;
struct patient
{
    char id[32];
    int age;
    struct patient *next;
};
struct patient *find(struct patient *head)
{
   struct patient *p,*ppre;
   p=head;
   while (p&&p->age>=60)
    {
        ppre=p;
        p = p->next;
    }
    return ppre;
}
struct patient *create(int n)
{
     struct patient *head=NULL,*p1,*p2,*p0,*q;
     int i;
     p1=p2=p0=(struct patient*)malloc(Len);
     scanf("%s %d",p1->id,&p1->age);
     if(p1->age>=60) m++;
     p1->next=NULL;
     head=p1=p0;
     p2=p1;
     for(i=1;i<n;i++)
        {
            p1=(struct patient*)malloc(Len);
            scanf("%s %d",p1->id,&p1->age);
            if(p1->age<60)
            {
                p1->next=NULL;
                p2->next=p1;
                p2=p1;
            }
            else if(p1->age>=60)
            {
                m++;
                if(head->age<60)
                {
                    head=p1;
                    p1->next=p0;
                }
                if(head->age>=60)
                {
                  p0=find(head);
                  q=p0->next;
                  p0->next=p1;
                  p1->next=q;
                }
                if((p0=find(head))->next==NULL)
                {
                   p1->next=NULL;
                   p2->next=p1;
                   p2=p1;
                }
            }
        }
         return head;
}
struct patient *arrange(struct patient *head)
{
    struct patient *p1,*p2;
    int t1,i,j;
    char t2[32];
    for(j=0;j<m;j++)
     {
          p1=head;
       for(i=1;i<m-j;i++)
       {
           p2=p1;
           p1=p1->next;
         if(p2->age<p1->age)
         {
              t1=p1->age;
              strcpy(t2,p1->id);
              p1->age=p2->age;
              strcpy(p1->id,p2->id);
              p2->age=t1;
              strcpy(p2->id,t2);
         }
       }
     }
}
void print(struct patient *head)
{
     struct patient *p;
     p = head;
     while (p)
     {
         printf("%s\n",p->id);
         p = p->next;
     }
}
int main()
{
    struct patient *head,*p,*q,*p0;
    int n,m=0,age;
    char id[32];
    scanf("%d",&n);
    head=create(n);
    arrange(head);
    print(head);
}
