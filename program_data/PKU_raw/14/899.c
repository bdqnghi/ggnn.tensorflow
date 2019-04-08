
struct stu
{
  int num;
  int a;
  int b;
  int total;
  int flag;
  struct stu *next;
};


void main()
{

  struct stu *p,*head;
  struct stu *p1,*p2,*pmax;
  int N,i;
  int max;

  scanf("%d",&N);

  //??
  p1=p2=(struct stu*)malloc(LEN);    
  scanf("%d%d%d",&p1->num,&p1->a,&p1->b);
  p1->total=p1->a+p1->b;
  p1->flag=0;
  p1->next=NULL;
  
  head=p1;
  
  
  for(i=0;i<N-1;i++)
  {      
	p2=p1;
	p1=(struct stu *)malloc(LEN);
    scanf("%d%d%d",&p1->num,&p1->a,&p1->b);
	p1->total=p1->a+p1->b;
	p1->flag=0;
	p1->next=NULL;

	p2->next=p1;
  }

  for(i=0;i<3;i++)
  {
    
	for(p=head,max=0;p!=NULL;p=p->next)
	   if(max<p->total&&p->flag==0) 
	   {
	     max=p->total;
		 pmax=p;
	   }
	pmax->flag=1;
	printf("%d %d\n",pmax->num,pmax->total);
  }
  

 /*  p=head;
  do
  {
    printf("%d*,",p->num);
	p=p->next;
  }while(p!=NULL);*/
  
 // for(i=0;i<3;i++)
   //  printf("%d %d\n",pmax[i]->num,pmax[i]->total);

 


}