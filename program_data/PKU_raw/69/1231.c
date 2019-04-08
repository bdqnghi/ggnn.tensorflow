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
      int x=1,y=1,z=1; //?x,y,z??????
      struct integer *p1,*p2,*p3,*head;
      head=p1=p2=(struct integer *)malloc(sizeof(struct integer));
      p1=NULL;
      creat(head);
      scanf("%c",&a);
      while(0<=(a-'0')&&(a-'0')<=9||a=='-')
      {
                                           p3=(struct integer *)malloc(sizeof(struct integer));
                                           if(a=='-')
                                           {
                                                     x=-1; //???????
                                                     scanf("%c",&a);
                                                     continue;
                                           }
                                           else
                                           {
                                               p3->n=x*(a-'0'); //????????????
                                               p3->pdown=p1;
                                               p3->pup=head; //???????????????
                                               if(p1!=NULL)
                                               p1->pup=p3;
                                               head->pdown=p3;
                                               p1=p3;
                                               scanf("%c",&a);
                                           }
      }
      p1=NULL;
      scanf("%c",&a); //??????
      while(0<=(a-'0')&&(a-'0')<=9||a=='-')
      {
                                           p3=(struct integer *)malloc(sizeof(struct integer));
                                           if(a=='-')
                                           {
                                                     y=-1;
                                                     scanf("%c",&a);
                                                     continue;
                                           }
                                           else
                                           {
                                               p3->n=y*(a-'0');
                                               p3->pup=p1;
                                               p3->pdown=head;
                                               head->pup=p3;
                                               if(p1!=NULL)
                                               p1->pdown=p3;
                                               p1=p3;
                                               scanf("%c",&a);
                                           }
      }
      p1=p2=head;
      while(p1->pdown!=NULL&&p2->pup!=NULL) //????????
      {
                                             p1=p1->pdown;
                                             p2=p2->pup;
                                             p1->n=p1->n+p2->n;
                                             p2->n=p1->n; //?????????????
      }
      if(p1->pdown==NULL&&p2->pup!=NULL) //???????????????????????????
      {
                                         p2=head->pup;
                                          while(p2->pup!=NULL)
                                          {
                                                               if(p2->n>9) //??
                                                               {
                                                                          p2->pup->n++;
                                                                          p2->n=p2->n%10;
                                                               }
                                                               if(p2->n<0) //??
                                                               {
                                                                          p2->pup->n--;
                                                                          p2->n=p2->n+10;
                                                               }
                                          p2=p2->pup;
                                          }
                                          if(y<0)
                                          printf("-"); //????????????????????????y????
                                          while(p2->n==0&&p2!=head->pup) //???????0???????????0
                                          p2=p2->pdown;
                                          while(p2!=head)
                                          {
                                                        printf("%d",y*(p2->n));
                                                        p2=p2->pdown;
                                          }
                                          while(p1!=NULL) //free?????
                                          {
                                                         p2=p1;
                                                         p1=p1->pup;
                                                         free(p2);
                                          }
      }
      else
      {
          p1=head;
          while(p1->pdown!=NULL) //?????????????????
          {
                                 p1=p1->pdown;
                                 if(p1->n>=10&&p1->pdown!=NULL)
                                 {
                                                              (p1->pdown->n)++;
                                                              p1->n=p1->n-10;
                                 }
                                 if(p1->n<0&&p1->pdown!=NULL)
                                 {
                                                            (p1->pdown->n)--;
                                                            p1->n=p1->n+10;
                                 }
          }
          if(p1->n<0)
          {
                    printf("-");
                    z=-1;
                    }
                    while(p1->n==0&&p1!=head->pdown) //???????0???????????0
                    p1=p1->pup;
                    while(p1!=head) //??
                    {
                                   printf("%d",z*(p1->n));
                                   p1=p1->pup;
                    }
                    while(p2!=NULL) //free?????
                    {
                                   p1=p2;
                                   p2=p2->pdown;
                                   free(p1);
                    }
          }
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
}
