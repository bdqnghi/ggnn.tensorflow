int sum=0,N;

struct student
{
  char name[20];
  int qimo;
  int zongping;
  char ganbu;
  char xibu;
  int lunwen;
  int total;
  struct student *next;
};//????????

void main()
{
  struct student *head,*pmax;
  struct student *p,*p1,*p2;
  int n;
  int max=0;
  
  scanf("%d",&N);

  
 
/*
  p1=p2=(struct student*)malloc(LEN);
  scanf("%s %d %d %c %c %d",p1->name,&p1->qimo,&p1->zongping,&p1->ganbu,&p1->xibu,&p1->lunwen);
  p1->total=0;
  
  p1->next=NULL;  //???p1->next???
  head=p1;
  
  for(n=0;n<N-1;n++)
  {
   	p2=p1;
	p1=(struct student*)malloc(LEN);
    scanf("%s %d %d %c %c %d",&p1->name,&p1->qimo,&p1->zongping,&p1->ganbu,&p1->xibu,&p1->lunwen);
	p1->total=0;
	p1->next=NULL;
	p2->next=p1;
  }
  */

  
 
  for(n=0;n<N;n++)
  {
   	 
	
	p2=p1;
	p1=(struct student*)malloc(LEN);
    scanf("%s %d %d %c %c %d",&p1->name,&p1->qimo,&p1->zongping,&p1->ganbu,&p1->xibu,&p1->lunwen);
	p1->total=0;
	p1->next=NULL;
	
	if(n==0) head=p1;
	else  p2->next=p1;
  }
  
   
  
 
   for(max=0,p=pmax=head;p!=NULL;p=p->next)
  {
    if(p->qimo>80&&p->lunwen>=1)     p->total=p->total+8000;
	if(p->qimo>85&&p->zongping>80)  p->total=p->total+4000;
	if(p->qimo>90)                  p->total=p->total+2000;
	if(p->qimo>85&&p->xibu=='Y')    p->total=p->total+1000;
    if(p->zongping>80&&p->ganbu=='Y')   p->total=p->total+850;

	sum=sum+p->total;
	if(max<p->total) 
	{
		max=p->total;
		pmax=p;
	}
  }
  
  

 
  
 // head=creat();
  //pmax=cal(head);
  printf("%s\n%d\n%d\n",pmax->name,pmax->total,sum);
}

