struct student
{
	char number[20];
	char name[20];
	char c;
	int age;
	float score;
	char address[30];
	struct student *next;
};
int n;
  struct student *creat(void)
  {
	  struct student *head;
	  struct student *p1,*p2;
	  int m;
	  n=0;
	  p1=p2=(struct student*)malloc(LEN);
	  head=NULL;
	  scanf("%s",p1->number);
	  for(m=0;;m++)
	  {
	  if(strcmp(p1->number,"end")!=0)
	  {
	    scanf("%s %c %d %f %s",p1->name,&p1->c,&p1->age,&p1->score,p1->address);
		  n=n+1;
		  if(n==1)head=p1;
		  else p2->next=p1;
		  p2=p1;
		  p1=(struct student *)malloc(LEN);
	  }
	  else break;
	  scanf("%s",p1->number);
	  }
	  p2->next=NULL;
	  return(head);
  }
  struct student *del(struct student *head,char *str)
  { 
	  struct student *p1,*p2;
	  p1=head;
	  while(strcmp(str,p1->number)!=0&&p1->next!=NULL)
	  {
		  p2=p1;
		  p1=p1->next;
	  }
	  if(strcmp(str,p1->number)==0)
	  {
		  if(p1==head)head=p1->next;
		  else p2->next=p1->next;
		  n=n-1;
	  }
	  return(head);
	  
  }
  void main()
  {
	  struct student *head,*p1;
	  head=creat();
	       
		   while(head!=NULL)
		   {
			   p1=head;
			   while(p1->next!=NULL)
				   p1=p1->next;
			   printf("%s %s %c %d %g %s\n",p1->number,p1->name,p1->c,p1->age,p1->score,p1->address);
			   head=del(head,p1->number);
		   }
  }
		   
 	       

 

 
