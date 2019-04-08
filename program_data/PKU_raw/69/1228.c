struct integer //??????
{
       int n;
       struct integer * pup;
       struct integer * pdown;
};
struct integer * creat(struct integer * head) //????
{
       head=(struct integer*)malloc(sizeof(struct integer));
       head->pup=NULL;
       head->pdown=NULL;
       return head;
}
main()
{
      char a;
      int x=1,y=1,l=1; //k?m?l???????
      struct integer * p,*q,*p1,*head;
      head=p=q=(struct integer *)malloc(sizeof(struct integer));
      p=NULL;
      creat(head);
      scanf("%c",&a);
      while(0<=(a-'0')&&(a-'0')<=9||a=='-')
      {
                                           p1=(struct integer *)malloc(sizeof(struct integer));
                                           if(a=='-')
                                           {
                                                     x=-1; //???????
                                                     scanf("%c",&a);
                                                     continue;
                                           }
                                           else
                                           {
                                               p1->n=x*(a-'0'); //????????????
                                               p1->pdown=p;
                                               p1->pup=head; //???????????????
                                               if(p!=NULL)
                                               p->pup=p1;
                                               head->pdown=p1;
                                               p=p1;
                                               scanf("%c",&a);
                                           }
      }
      p=NULL;
      scanf("%c",&a); //??????
      while(0<=(a-'0')&&(a-'0')<=9||a=='-')
      {
                                           p1=(struct integer *)malloc(sizeof(struct integer));
                                           if(a=='-')
                                           {
                                                     y=-1;
                                                     scanf("%c",&a);
                                                     continue;
                                           }
                                           else
                                           {
                                               p1->n=y*(a-'0');
                                               p1->pup=p;
                                               p1->pdown=head;
                                               head->pup=p1;
                                               if(p!=NULL)
                                               p->pdown=p1;
                                               p=p1;
                                               scanf("%c",&a);
                                           }
      }
      p=q=head;
      while(p->pdown!=NULL&&q->pup!=NULL) //????????
      {
                                             p=p->pdown;
                                             q=q->pup;
                                             p->n=p->n+q->n;
                                             q->n=p->n; //?????????????
      }
      if(p->pdown==NULL&&q->pup!=NULL) //???????????????????????????
      {
                                          q=head->pup;
                                          while(q->pup!=NULL)
                                          {
                                                               if(q->n>9) //??
                                                               {
                                                                          q->pup->n++;
                                                                          q->n=q->n%10;
                                                               }
                                                               if(q->n<0) //??
                                                               {
                                                                          q->pup->n--;
                                                                          q->n=q->n+10;
                                                               }
                                          q=q->pup;
                                          }
                                          if(y<0)
                                          printf("-"); //????????????????????????m????
                                          while(q->n==0&&q!=head->pup) //???????0???????????0
                                          q=q->pdown;
                                          while(q!=head)
                                          {
                                                        printf("%d",y*(q->n));
                                                        q=q->pdown;
                                          }
                                          while(p!=NULL) //free?????
                                          {
                                                         q=p;
                                                         p=p->pup;
                                                         free(q);
                                          }
      }
      else
      {
          p=head;
          while(p->pdown!=NULL) //?????????????????
          {
                                 p=p->pdown;
                                 if(p->n>=10&&p->pdown!=NULL)
                                 {
                                                              (p->pdown->n)++;
                                                              p->n=p->n-10;
                                 }
                                 if(p->n<0&&p->pdown!=NULL)
                                 {
                                                            (p->pdown->n)--;
                                                            p->n=p->n+10;
                                 }
          }
          if(p->n<0)
          {
                    printf("-");
                    l=-1;
                    }
                    while(p->n==0&&p!=head->pdown) //???????0???????????0
                    p=p->pup;
                    while(p!=head) //??
                    {
                                   printf("%d",l*(p->n));
                                   p=p->pup;
                    }
                    while(q!=NULL) //free?????
                    {
                                   p=q;
                                   q=q->pdown;
                                   free(p);
                    }
          }
}
