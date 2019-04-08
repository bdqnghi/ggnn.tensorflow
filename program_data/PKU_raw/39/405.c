struct student
{
	char name[20];
	int end;
	int clas;
	char leader;
	char west;
	int paper;
	struct student *next;
};
int main()
{
	struct student *p,*q,*head;
	char *a;
	int *b,*c;
	int n,i,max=0;
	long int sum=0;
	scanf("%d\n",&n);
	head=p=q=(struct student *)malloc(LEN);
	a=(char*)malloc(20*sizeof(char));
	b=c=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d\n",p->name,&p->end,&p->clas,&p->leader,&p->west,&p->paper);
		p=(struct student *)malloc(LEN);
		q->next=p;
		q=p;
	}
	q->next=NULL;
	q=p=head;
	for(i=0;i<n;i++)
	{
		if(((p->end)>80)&&((p->paper)>0))*b+=8000;
		if(((p->end)>85)&&((p->clas)>80))*b+=4000;
		if((p->end)>90)*b+=2000;
		if(((p->end)>85)&&((p->west)=='Y'))*b+=1000;
		if(((p->clas)>80)&&((p->leader)=='Y'))*b+=850;
		b++;
		p=q->next;
		q=p;
	}
	q=p=head;
	b=c;
	for(i=0;i<n;i++)
	{
		if(*b>max)
		{
			max=*b;
			strcpy(a,p->name);
		}
		sum+=*b;
		b++;
		p=q->next;
		q=p;
	}
	printf("%s\n%d\n%ld\n",a,max,sum);
}
