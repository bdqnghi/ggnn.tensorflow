struct student
{
	int num,score1,score2;
	char name[50],west,ganbu;
	struct student *next;
};
int n;
struct student *create(void)
{
	int i,j;
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	head=NULL;
	i=1;
	scanf("%s %d %d %c %c %d",&p1->name,&p1->score1,&p1->score2,&p1->ganbu,&p1->west,&p1->num);
	while(1)
	{
		if(i==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		if(i==n)
			break;
		p1=(struct student*)malloc(LEN);
		scanf("%s %d %d %c %c %d",&p1->name,&p1->score1,&p1->score2,&p1->ganbu,&p1->west,&p1->num);
		i++;
	}
	p2->next=NULL;
	return(head);
}
void main()
{
	int i,j,*x,amount,max;
	char (*y)[50];
	struct student *head,*p1,*p2;
	scanf("%d",&n);
	head=create();
	p1=p2=head;
	x=(int*)malloc(100*sizeof(int));
	y=(char(*)[50])calloc(100,50*sizeof(char));
	i=0;
	while(p1!=NULL)
	{
		*(x+i)=0;
		if(p1->score1>80&&p1->num>0)
			*(x+i)=*(x+i)+8000;
		if(p1->score1>85&&p1->score2>80)
			*(x+i)=*(x+i)+4000;
		if(p1->score1>90)
			*(x+i)=*(x+i)+2000;
		if(p1->score1>85&&p1->west=='Y')
			*(x+i)=*(x+i)+1000;
		if(p1->score2>80&&p1->ganbu=='Y')
			*(x+i)=*(x+i)+850;
        strcpy(*(y+i),p1->name);
		p1=p1->next;
		i++;
	}
	j=0;
	amount=0;
	for(i=0;i<n;i++)
		amount=amount+(*(x+i));
	max=*x;
	for(i=1;i<n;i++)
		if(*(x+i)>max)
		{
			max=*(x+i);
			j=i;
		}
		printf("%s\n",*(y+j));
		printf("%d\n",max);
		printf("%d\n",amount);
}