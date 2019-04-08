struct student
{
       char num[20];
       char name[20];
       char sex;
       int age;
       double score;
       char address[20];
       struct student *next;
       struct student *former;
       };
        
main()
{
      struct student *p,*p1,*p2,*header;
        header=(struct student *)malloc(sizeof(struct student));
        header->next=header->former=NULL;
        p2=header;
       for(;;)
        {
           p1=(struct student *)malloc(sizeof(struct student));
           p2->next=p1;
           p1->former=p2;
           scanf("%s",p1->num);
           if(p1->num[0]=='e'&&p1->num[1]=='n'&&p1->num[2]=='d') break;
           scanf("%s %c %d %lf %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
           p2=p1;
           }
        p2->next=NULL;
        free(p1);
               p=p2;
               for(;p->former!=NULL;)
               {
                 if(p->score==(int)(p->score))

                 printf("%s %s %c %d %d %s\n",p->num,p->name,p->sex,p->age,(int)(p->score),p->address);

                 else printf("%s %s %c %d %.1lf %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
                 p=p->former;
                 }
      p1=p2;
      for(;p1->former!=NULL;)
      {
       p2=p1;
       p1=p2->former;
       free(p2);
       }
       free(p1);      

      }
