struct student 
{
     char number[30];
     char name[20];
     char sex;
     int age;
     char score[30];       
     char address[20]; 
     struct student *next; 
};
main()
{
     struct student *head,*end,*p,*q,*a;
     head=(struct student*)malloc(sizeof(struct student));
     end=(struct student*)malloc(sizeof(struct student));
     int i,n;
     end->next=NULL;
     a=head;
     for(i=1;;i++)
     {
         if(i==1)
         {
             p=(struct student*)malloc(sizeof(struct student)); 
             scanf("%s",p->number);
             if(p->number[0]=='e') break;   
             scanf("%s %c %d %s %s",p->name,&p->sex,&p->age,p->score,p->address);
             head->next=p; 
             p->next=end;
             q=p;
         }
         else
         {
             p=(struct student*)malloc(sizeof(struct student)); 
             scanf("%s",p->number);   
             if(p->number[0]=='e') break;   
             scanf("%s %c %d %s %s",p->name,&p->sex,&p->age,p->score,p->address);
             head->next=p; 
             p->next=q;
             q=p;       
         }
     }
     a=head->next;
     for(;a->next!=NULL;)                                
     {
         printf("%s %s %c %d %s %s\n",a->number,a->name,a->sex,a->age,a->score,a->address);
         a=a->next;                                                 
     }  
      
}
