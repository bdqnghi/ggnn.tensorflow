 
struct student
{
	int num;
	int yuwen;
	int shuxue;
	struct student *next;
};
int n;
  struct student *creat(int m)
  {
	  struct student *head;
	  struct student *p1,*p2;
	  n=0;
	  p1=p2=(struct student*)malloc(LEN);
	  scanf("%d%d%d",&p1->num,&p1->yuwen,&p1->shuxue);
	  head=NULL;
	  while(m--)
	  {
		  n=n+1;
		  if(n==1)head=p1;
		  else p2->next=p1;
		  p2=p1;
		  p1=(struct student *)malloc(LEN);
		  scanf("%d%d%d",&p1->num,&p1->yuwen,&p1->shuxue);
	  }
	  p2->next=NULL;
	  return(head);
  }
  struct student *del(struct student *head,int num)
  { 
	  struct student *p1,*p2;
	  p1=head;
	  while(num!=p1->num&&p1->next!=NULL)
	  {
		  p2=p1;
		  p1=p1->next;
	  }
	  if(num==p1->num)
	  {
		  if(p1==head)head=p1->next;
		  else p2->next=p1->next;
		  n=n-1;
	  }
	  return(head);
	  
  }
  void main()
  {
	  struct student *head,*p1,*p2;
	  int max=0,i,m;
	  scanf("%d",&m);
	  printf("\n");
	  head=creat(m);
	  for(i=0;i<3;i++)
	  {
	       p1=p2=head;
		   max=0;
 	       while(p1->next!=NULL)
		   {
	         if((p1->yuwen+p1->shuxue)>max)
		     max=p1->yuwen+p1->shuxue,p2=p1;
		      p1=p1->next;
		   }
	    printf("%d %d\n",p2->num,(p2->yuwen+p2->shuxue));
	    head=del(head,p2->num);
	  }
  }

 
