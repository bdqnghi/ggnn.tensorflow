
 

struct student
{
       char information[50];
       struct student *next;
};

int main()
{
    struct student *create_and_reverse();
    void print(struct student *head);
    struct student *head;
    head=create_and_reverse();
    print(head);
    return 0;
}

struct student *create_and_reverse()
{
       struct student *p1,*p2,*head;
       char end[50]={'e','n','d'};
       p1=(struct student *)malloc(len);
       p2=p1;
       
       gets((p1->information));
       for(;;)
       {
              p1=(struct student *)malloc(len);
              gets((p1->information));
              if(strcmp(p1->information,end))
              {
                                             (p1->next)=p2;
              }
              else
              {
                  head=p2;
                  break;
              }
              p2=p1;
       }
       return (head);
}

void print(struct student *head)
{
     struct student *p;
     p=head;
     for(;;)
     {
                           printf("%s\n",p->information);
                           if((p->next)==NULL)
                           {
                                              break;
                           }
                           else
                           {
                               p=(p->next);
                           }
     }
}