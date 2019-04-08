struct student
{
	char num[200],name[80],sex[20],age[30],score[30],add[200];
	struct student *next;
};
 struct student *creat()
{struct student *head,*p1,*p2;
  p1=(struct student*)malloc(LEN);
  scanf("%s",p1->num);
  p1->next=0;
  while(strcmp(p1->num,"end")!=0)
  {   p2=p1;
	  scanf("%s%s%s%s%s\n",p1->name,p1->sex,p1->age,p1->score,p1->add);
	  p1=(struct student*)malloc(LEN);
	  p1->next=p2;
	  scanf("%s",p1->num);
  }
  head=p2;
  return head;
}
void print (struct student* head)
  {   struct student *p;
      for(p=head;p!=0;p=p->next)
	  { printf("%s %s %s %s %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
      }
  }
 
int main()
  {  struct student* head;
      head=creat();
      print(head);
	  return 7;
  }
