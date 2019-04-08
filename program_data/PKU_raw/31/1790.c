


struct stu
{
 char id[10];
 char name[20];
 char sex;
 int age;
 char score[10];
 char addr[20];
 struct stu *next;
};

int main()
{
    struct stu *creat(void);
    void output(struct stu*head);
     
    struct stu *head,*p;
    
    head=NULL;
    head=creat();
                  p=head;
                    
    output(head);
    
    
}


struct stu *creat(void)
{
       int i;
       struct stu*p1,*p2,*p3,*head;
       head=NULL;
       
       p1=(struct stu*)malloc(LEN);
       if(head==NULL) head=p2=p3=p1;p1->next=NULL;
       
       
       scanf("%s",p1->id);
       
       while(p1->id[0]!='e')
       {
        p3=p2;
        
        

        scanf(" %s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->addr);
        
        p1=(struct stu*)malloc(LEN);
        p1->next=p2;
        p2=p1;
        
        scanf("%s",p1->id);
                           
      
       }
       head=p3;
       
       
       
       return head;
}

void output(struct stu*head)
{
     struct stu*p1,*p2;
     p1=head;
                           
     
     while(p1!=NULL)
      {
      printf("%s %s %c %d %s %s\n",p1->id,p1->name,p1->sex,p1->age,p1->score,p1->addr);
      p1=p1->next;
      }
}
