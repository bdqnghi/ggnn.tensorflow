


struct patient
{
       char id[11];
       int age;
       struct patient *next;
};

int main()
{
    struct patient *head;
    struct patient *create(int n);
    void sort(struct patient *head);
    int n;
    scanf("%d",&n);
    head=create(n);
    sort(head);
   
    return 0;
}

struct patient *create(int n)
{
       int i;
       struct patient *head,*p1,*p2;
       p1=(struct patient *)malloc(len);
       head=p1;
       p2=p1;
       scanf("%s %d",p1->id,&p1->age);
       for(i=1;i<n;i++)
       {
                       p1=(struct patient *)malloc(len);
                       scanf("%s %d",p1->id,&p1->age);
                       (p2->next)=p1;
                       p2=p1;
                       if(i==(n-1))
                       (p1->next)=NULL;
       }
       return head;
}

void sort(struct patient *head)
{
     int m;
     struct patient *p1,*p2;
     
     for(;;)
     {
            p1=head;
            p2=head;
            m=0;
            for(;;)
            {
                   if((p1->age)>m) m=(p1->age);
                   if((p1->next)==NULL) break;
                   else p1=(p1->next);
            }
            if(m<60) break;
            p1=head;
            for(;;)
            {
                   if((p1->age)==m)
                   {
                                   printf("%s\n",p1->id);
                                   if(p1==head) head=(p1->next);
                                   else
                                   {
                                       (p2->next)=(p1->next);
                                   }
                                   break;
                   }
                   else
                   {
                       if(p1!=p2)
                       {
                                 p2=p1;
                                 p1=(p1->next);
                       }
                       else p1=(p1->next);
                   }
            }
     }
     p1=head;
     for(;;)
     {
            printf("%s\n",p1->id);
            if((p1->next)==NULL) break;
            else p1=(p1->next);
     }
}