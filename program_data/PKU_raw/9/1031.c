struct ill
{
       char num[20];
       int age;
       int turn;
       struct ill *next;
};

void run(struct ill *head,int age,int turn,char *num)
{
     struct ill *pre,*p,*s;
     s=(struct ill *)malloc(sizeof(struct ill));
     pre=head;
     p=pre->next;
     strcpy(s->num,num);
     s->turn=turn;
     s->age=age;
     //s->next=NULL;
     for(;p!=NULL;)
     {
                   pre=p;
                   p=p->next;
     }
     pre->next=s;
     s->next=p;
}


int main()
{
    int i,j,k,age,turn,m,n;
    char *num;
    void run(struct ill *head,int age,int turn,char *num);
    num=(char *)malloc(20*sizeof(char));
    struct ill *head,*p,*s,*pre;
    head=(struct ill *)malloc(sizeof(struct ill));
    head->next=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%s %d",num,&age);
                    turn=i;
                    run(head,age,turn,num);
    }
    k=0;
    for(p=head->next;p!=NULL;p=p->next)
    {
                                       if(p->age>=60)
                                       {
                                                   k++;
                                       }
    }
    //printf("%d\n",k);
    p=head->next;
    m=100;
    if(k==0)
    {
            for(i=0;i<n;i++)
            {
                            p=head->next;
                            for(;p!=NULL;)
                            {
                                          if(p->turn==i)
                                          {
                                                        puts(p->num);
                                                        //printf("%s %d %d\n",p->num,p->age,p->turn);
                                                        break;
                                          }
                            }
            }
    }
    else if(k==n)
    {
         for(i=0;i<n;i++)
         {
                         p=head->next;
                         m=0;j=100;
                         for(;p!=NULL;)
                         {
                                       if(p->age>m)
                                       {
                                                   m=p->age;
                                                   j=p->turn;
                                       }
                                       else if(p->age==m)
                                       {
                                            if(p->turn<j)
                                            {
                                                         m=p->age;
                                                         j=p->turn;
                                            }
                                       }
                                       p=p->next;
                         }
                         pre=head;
                         p=head->next;
                         for(;p!=NULL;)
                         {
                                       if((p->age==m)&&(p->turn==j))
                                       {
                                                                    puts(p->num);
                                                                    //printf("%s %d %d\n",p->num,p->age,p->turn);
                                                                    pre->next=p->next;
                                                                    break;
                                       }
                                       else
                                       {
                                           pre=p;
                                           p=p->next;
                                       }
                         }
         }
    }
    else
    {
             for(i=0;i<k;i++)
             {
                         p=head->next;
                         m=0;j=100;
                         for(;p!=NULL;)
                         {
                                       if(p->age>m)
                                       {
                                                   m=p->age;
                                                   j=p->turn;
                                       }
                                       else if(p->age==m)
                                       {
                                            if(p->turn<j)
                                            {
                                                         m=p->age;
                                                         j=p->turn;
                                            }
                                       }
                                       p=p->next;
                         }
                         pre=head;
                         p=head->next;
                         for(;p!=NULL;)
                         {
                                       if((p->age==m)&&(p->turn==j))
                                       {
                                                                    puts(p->num);
                                                                    //printf("%s %d %d\n",p->num,p->age,p->turn);
                                                                    pre->next=p->next;
                                                                    break;
                                       }
                                       else
                                       {
                                           pre=p;
                                           p=p->next;
                                       }
                         }
               }
               for(i=0;i<n-k;i++)
               {
                                 m=100;
                                 p=head->next;
                                 for(;p!=NULL;)
                                 {
                                               if(p->turn<m)
                                               {
                                                            m=p->turn;
                                               }
                                               p=p->next;
                                 }
                                 p=head->next;
                                 for(;p!=NULL;)
                                 {
                                               if(p->turn==m)
                                               {
                                                            puts(p->num);
                                                            //printf("%s %d %d\n",p->num,p->age,p->turn);
                                                            p->turn=100;
                                                            break;
                                               }
                                               else
                                               {
                                                   p=p->next;
                                               }
                                 }
               }
    }
    return 0;
}