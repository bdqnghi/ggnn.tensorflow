struct f
{
	char *id;
	char id_[11];
	int age;
	struct f*next;
};
struct in
{
	struct f*old;
	struct f*young;
	int num;
};
int main()
{
	int n,num_;
	scanf("%d",&n);
	struct f *p2,*p3;
	struct in *p1;
	struct in*cr(int x);//?????????????????????
	p1=cr(n);
	p3=p1->young;
	p2=p1->old;
	num_=p1->num;
	void sort (struct f*p,int x);
	sort(p2,num_);
	while(p2)
	{
		printf("%s\n",p2->id);
		p2=p2->next;
	}
	while(p3)
	{
		printf("%s\n",p3->id);
		p3=p3->next;
	}	
}
struct in*cr(int x)
{
	struct f* head1,*head2,*p;
	int k=0;
	struct in *p3;
	p3=(struct in *)malloc(sizeof (struct in));
	head1=(struct f*)malloc(sizeof (struct f));
	head2=(struct f*)malloc(sizeof (struct f));
	p3->old=head1;//??????????????
	p3->young=head2;
	struct f*p4,*p5,*p6,*p7;
	p4=head1;
	p6=head2;
	int i;
	for(i=0;i<x;i++)
	{
		p=(struct f*)malloc(sizeof (struct f));
		scanf("%s %d",p->id_,&p->age);
		if(p->age>=60)//????????????
		{
			p4->age=p->age;
			p4->id=p->id_;
			p5=p4;
			p4=(struct f*)malloc(sizeof (struct f));
			p5->next=p4;
			k++;
		}
		else//??????????????
		{
			p6->age=p->age;
			p6->id=p->id_;
			p7=p6;
			p6=(struct f*)malloc(sizeof (struct f));
			p7->next=p6;
		}
	}
	p5->next=0;
	p7->next=0;
	p3->num=k;
	return p3;//?????
}
void sort (struct f*p,int x)
{
	int i,j,k1;
	char *k2;
	struct f*p1,*p2;
	for(i=0;i<x-1;i++)//???????????
		for(p1=p,j=0;i+j<x-1;j++,p1=p1->next)
		{
			p2=p1->next;
			if(p2->age>p1->age)
			{
				k1=p2->age;
				p2->age=p1->age;
				p1->age=k1;
				k2=p2->id;
				p2->id=p1->id;
				p1->id=k2;
			}
		}
}








