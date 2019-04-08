struct student
{
	int num;
	int chinese;
	int maths;
	struct student *next;
};
int n,max0;
struct student *creat(void)
{
	struct student *head,*p1,*p2;
    int i;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	head=p1;
	for(i=1;i<n;i++)
	{
		scanf("%d%d%d",&p1->num,&p1->chinese,&p1->maths);
		p1=(struct student *)malloc(sizeof(struct student));
		p2->next=p1;
		p2=p1;
	}
	scanf("%d%d%d",&p1->num,&p1->chinese,&p1->maths);
	p2->next=p1;
	p1->next=NULL;
	return head;
}
/*struct student *sort(struct student *head)
{
	struct student *p1,*p2,*temp;
	temp=(struct student *)malloc(sizeof(struct student));
	for(p1=head;p1!=NULL;p1=p1->next)
    for(p2=p1->next;p2!=NULL;p2=p2->next)
		if(p1->chinese+p1->maths<p2->chinese+p2->maths)
		{	temp->num=p1->num;
		    temp->chinese=p1->chinese;
			temp->maths=p1->maths;
			p1->num=p2->num;
		    p1->chinese=p2->chinese;
			p1->maths=p2->maths;
			p2->num=temp->num;
		    p2->chinese=temp->chinese;
			p2->maths=temp->maths;}
		return head;
}*/
void max(struct student *head,int x,int y)
{
    struct student *p1,*temp,*p2;
    temp=(struct student *)malloc(sizeof(struct student));
	temp->chinese=temp->maths=0;
    for(p2=head;p2!=NULL;p2=p2->next)
		if(p2->chinese+p2->maths==x)break;
	for(p1=head;p1!=NULL;p1=p1->next)
		if((p1->chinese+p1->maths>temp->chinese+temp->maths)&&(p1->chinese+p1->maths!=x||p1->chinese+p1->maths==x&&p1->num!=p2->num)&&(p1->chinese+p1->maths!=y))
		{
			temp->chinese=p1->chinese;
				temp->maths=p1->maths;
				temp->num=p1->num;
		}
		max0=temp->chinese+temp->maths;
     printf("%d %d\n",temp->num,max0);
}
main()
{
	struct student *head;
	int max1,max2;
	scanf("%d",&n);
    head=creat();
	max(head,0,0);
	max1=max0;
	max(head,max1,0);
	max2=max0;
    max(head,max1,max2);
}