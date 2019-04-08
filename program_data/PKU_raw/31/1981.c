struct student
{
 char num[50]; 
 char name[20];
 char sex;
 int year;
 char score[10]; 
 char add[50];
 struct student *next;
};

int n; 

struct student *Create()
{
 struct student *head; 
 struct student *p1=NULL; 
 struct student *p2=NULL; 
 n = 0; 
 p1 = (struct student *)malloc(LEN); 
 p2 = p1; 
 
  head = NULL;
   scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->year,p1->score,p1->add);
  
 int j=0;
 for(;;j++)
 {
  n += 1; 

  if (n==1) 
  {
   head = p1;

p2->next = NULL; 
  }
  else
  {
   p2->next = p1;
  }

  p2 = p1; 
  
  p1 = (struct student *)malloc(LEN);
  scanf("%s",p1->num);
  if(strcmp(p1->num,"end")==0) 
		{
			p2->next=NULL;
			break;
		}
  scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->year,p1->score,p1->add);
 }
 
 p2->next = NULL; 
 
 free(p1); 
 p1 = NULL; 
 return head;
}
struct student *Reverse(struct student *head)
{
 struct student *p;
 struct student *p1; 
 struct student *p2;
 
 p1 = NULL;
 p2 = head; 
 while (p2 != NULL)
 {
  p = p2->next;
  p2->next = p1;
  p1 = p2;
  p2 = p;
 }
 head = p1;
 return head;
}


void Print(struct student *head)
{
 struct student *p;

 
 p = head;
 if(head != NULL) 
 {
  
  do 
  { 
  
   printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->year,p->score,p->add);
   p = p->next; 
  }
  while (p != NULL);
 }
}

int main()
{
  struct student *head;
head = Create(); 
head = Reverse(head);
 Print(head);
	return 0;

}