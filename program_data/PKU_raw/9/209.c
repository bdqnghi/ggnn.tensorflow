struct patient{
 int num;
 char hao[20];
 int age;
 struct patient *next;
};
struct ans{
 int numan;
 char haoan[20];
 int agean;
 struct ans *nextan;
};
void main()
{
	struct patient *head,*p1,*p2;
	struct ans *headan,*ans1,*ans2;
	int i,j,max,n,shu;
	shu=0;
	scanf("%d",&n);
	p1=(struct patient*)malloc(sizeof(struct patient));
	scanf("%s %d",p1->hao,&p1->age);
	p1->num=1;
	head=p1;
	p2=p1;
	for(i=0;i<n-1;i++)
	{
		p1=(struct patient*)malloc(sizeof(struct patient));
		scanf("%s %d",p1->hao,&p1->age);
		p2->next=p1;
		p1->num=i+2;
		p2=p1;
	}
	p2->next=NULL;
	max=0;
	p1=head;
	for(j=0;j<n;j++)
	{
		if(max<p1->age)max=p1->age;
		p1=p1->next; 
	}
	p1=head;
	for(j=0;j<n;j++)
	{
		if(max==p1->age)
		{
			ans1=(struct ans*)malloc(sizeof(struct ans));
			strcpy(ans1->haoan,p1->hao);
			printf("%s\n",ans1->haoan);
			ans1->agean=max;
			headan=ans1;
			ans2=ans1;
			p1->num=-1;
			p1->age=-1;
			shu=shu+1;
			break;
		}
		p1=p1->next;
	}   
	for(i=0;i<n-1;i++)
	{
		max=0;
		p1=head;
		for(j=0;j<n;j++)
		{
			if(max<p1->age)max=p1->age;
			p1=p1->next; 
		}
		if(max<60)break;
		p1=head;
		for(j=0;j<n;j++)
		{
			if(max==p1->age)
			{
				ans1=(struct ans*)malloc(sizeof(struct ans));
				strcpy(ans1->haoan,p1->hao);
				printf("%s\n",ans1->haoan);
				ans1->agean=max;
				headan=ans1;    
				ans2=ans1;
				p1->num=-1;
				p1->age=-1;
				shu=shu+1;
				break;
			}
			p1=p1->next;
		}     
	}
	for(i=0;i<n-shu;i++)
	{
		max=101;
		p1=head;
		for(j=0;j<n;j++)
		{
			if(max>p1->num&&p1->num!=-1)max=p1->num;
			p1=p1->next; 
		}
		p1=head;
		for(j=0;j<n;j++)
		{
			if(max==p1->num)
			{
				ans1=(struct ans*)malloc(sizeof(struct ans));
				strcpy(ans1->haoan,p1->hao);
				printf("%s\n",ans1->haoan);
				ans1->numan=max;
				headan=ans1;
				ans2=ans1;
				p1->num=-1;
				p1->age=-1;
				break;
			}
			p1=p1->next;
		}
		ans2->nextan=NULL; 
	}
}