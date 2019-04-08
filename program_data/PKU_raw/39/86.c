struct student
{
	char name[20];
	int final;
	int ping;
	char gan;
	char xi;
	int paper;
	int money;
	struct student *next;
};

void main()
{
	int n,i=0,max=0,sum=0;
	scanf("%d",&n);
	struct student *head,*p,*x;
	head=p=(struct student *)malloc(sizeof(struct student));
	(*p).money=0;
	while(i++<n)
	{
		scanf("%s %d %d %c %c %d",(*p).name,&(*p).final,&(*p).ping,&(*p).gan,&(*p).xi,&(*p).paper);
		if((*p).final>80&&(*p).paper>0)(*p).money+=8000;
		if((*p).final>85&&(*p).ping>80)(*p).money+=4000;
		if((*p).final>90)(*p).money+=2000;
		if((*p).final>85&&(*p).xi=='Y')(*p).money+=1000;
		if((*p).ping>80&&(*p).gan=='Y')(*p).money+=850;
		if((*p).money>max){max=(*p).money;x=p;}
		sum+=(*p).money;
		p=(*p).next=(struct student *)malloc(sizeof(struct student));
		(*p).money=0;
	}
	printf("%s\n%d\n%d\n",(*x).name,max,sum);
}