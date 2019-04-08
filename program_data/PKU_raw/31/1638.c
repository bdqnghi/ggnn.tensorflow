

main()
{
      struct student
      {
             char num[20];
             char name[20];
             char sex;
             int age;
             float score;
             char ad[20];
             struct student *next;
      };
      
      struct student *head,*p1,*p2;
      int n=0;
      
      p1=p2=( struct student*) malloc(LEN);
      scanf("%s%s %c%d%f%s",p1->num,p1->name,&p1->sex,&p1->age,&p1->score,&p1->ad);//??????????? 
      p1->next=NULL;
      head=NULL;
      while  (n!=1)
      {
             p1=(struct student*)malloc(LEN);
             scanf("%s",&p1->num);
             if (strcmp(p1->num,"end")!=0)
             {
             scanf("%s %c%d%f%s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->ad);
             p1->next=p2;
             p2=p1;
             }
             else
             n=1;
      }
      
      head=p2;
      p1=head;
      
      while (p1!=NULL)
      {
            printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->ad);
            p1=p1->next;
      }

}
      
      
             
