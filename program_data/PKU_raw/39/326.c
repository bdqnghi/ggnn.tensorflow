struct student 
{
    char name[20];
	int  ave;
    int cla;
	char g;
	char x;
	int num;
	int qian;
    struct student *next;
};
void main()
{
	int zong,max=0,i,j;
	zong=0;
   struct student *p,*head,*p2;
   p2=p=head=(struct student *)malloc(sizeof(struct student));
   int N;
	   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
    scanf("%s %d %d %c %c %d",p->name,&p->ave,&p->cla,&p->g,&p->x,&p->num); 
     p->qian=0;
	if(p->ave>80&&p->num>=1)
		p->qian+=8000;
    if(p->ave>85&&p->cla>80)
p->qian+=4000;
if(p->ave>90)
p->qian+=2000;
if(p->x=='Y'&&p->ave>85)
p->qian+=1000;
if(p->g=='Y'&&p->cla>80)
p->qian+=850;
zong+=p->qian;
	if(i==0)
		head=p;
	p2->next=p;
	p2=p;
	p=(struct student *)malloc(sizeof(struct student));
   }
   p2=NULL;
   p=head;
   for(i=0;i<N;i++)
   {
	   j=p->qian;
	   max=j>max?j:max;
	   p=p->next;
   }
   p=head;
   for(i=0;i<N;i++)
   {
	   if(p->qian==max)
	   {printf("%s\n",p->name);
	   break;   }
	   p=p->next;
   }
 printf("%d\n",max);
   printf("%d",zong);
}
