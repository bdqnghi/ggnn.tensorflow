struct stu
{   char num[20];
     char name[30];
     char sex;
     int age;
     float score;
     char add[30];
     struct stu *next;
     };
void main()
{ int i,len=1;
 struct stu *p1,*p2,*head,*new,*newhead;
 p1=p2=head=(struct stu*)malloc(sizeof(struct stu));
 printf("\n");
 scanf("%s %s %c %d %f %s" ,p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
 while(strcmp(p1->num,"end")!=0)
 {p1=(struct stu*)malloc(sizeof(struct stu));
  scanf("%s %s %c %d %f %s" ,p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
  printf("\n");
  if(strcmp(p1->num,"end")==0)
  p2->next=NULL;
  else
  {p2->next=p1;
  p2=p1;
  len++;}
 }
 p1=head;
 for(i=0;i<len;i++)
 { p1=p2=head;
 while(p1->next!=NULL)
   {p2=p1;
   p1=p1->next;
   }
   if(i==0)
   newhead=new=p1;
   else
   new=new->next=p1;
   p2->next=NULL;
}
p1=newhead;
for(i=0;i<len;i++)
{printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
p1=p1->next;
}
}