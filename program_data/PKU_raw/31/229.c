struct stu
{char id[16];
 char name[32];
 char gender;
 int age;
 char score[8];
 char add[16];
 struct stu*next;
};
int n;
struct stu*creat(void)
{struct stu *head,*p1,*p2;
 n=0;
 head=NULL;
 p1=p2=(struct stu*)malloc(sizeof(struct stu));
 scanf("%s",p1->id);
 while(strcmp(p1->id,"end")!=0)
 {scanf("%s %c %d %s %s",p1->name,&p1->gender,&p1->age,p1->score,p1->add);
  n=n+1;
  if(n==1) {head=p1;p1->next=NULL;}
  else 
  {
   p1->next=p2;
   head=p1;
  }
  p2=p1;
  p1=(struct stu*)malloc(sizeof(struct stu));
  scanf("%s",p1->id);
 }
 return(head);
}
void main()
{struct stu*head,*p;
 head=creat();
 p=head;
 if(head!=NULL)
 do
 {printf("%s %s %c %d %s %s\n",p->id,p->name,p->gender,p->age,p->score,p->add);
  p=p->next;
 }while(p!=NULL);
}