struct student
{
	char name[30];
	int aver;
	int judge;
	char cadre;
	char west;
	int amount;
	long prize;
	struct student *next;
};
int n;
  struct student *creat(int m)
  {
	  struct student *head;
	  struct student *p1,*p2;
	  n=0;
	  p1=p2=(struct student*)malloc(LEN);
	  scanf("%s %d %d %c %c %ld",p1->name,&p1->aver,&p1->judge,&p1->cadre,&p1->west,&p1->amount);
	  p1->prize=0;
	  head=NULL;
	  while(m--)
	  {
		  n=n+1;
		  if(n==1)head=p1;
		  else p2->next=p1;
		  p2=p1;
		  p1=(struct student *)malloc(LEN);
		  scanf("%s %d %d %c %c %ld",p1->name,&p1->aver,&p1->judge,&p1->cadre,&p1->west,&p1->amount);
		  p1->prize=0;
		  
	  }
	  p2->next=NULL;
	  return(head);
  }
  void main()
  {
	  struct student *head,*p1,*p2;
	  int m,max=0,sum=0;
	  scanf("%d",&m);
	  head=creat(m);
	       p1=p2=head;
		  while(p1)
		  {
			  if(p1->aver>80&&p1->amount>0)p1->prize+=8000;
			  if(p1->aver>85&&p1->judge>80)p1->prize+=4000;
			  if(p1->aver>90)p1->prize+=2000;
			  if(p1->aver>85&&p1->west=='Y')p1->prize+=1000;
			  if(p1->judge>80&&p1->cadre=='Y')p1->prize+=850;
			  p1=p1->next;
		  }
		  p1=head;
		  while(p1)
		  {
			  sum+=p1->prize;
			  if(p1->prize>max)max=p1->prize,p2=p1;
			  p1=p1->next;
		  }
		  printf("%s\n%d\n%d\n",p2->name,p2->prize,sum);

		   
  }