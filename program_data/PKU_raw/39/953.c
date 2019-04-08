int main()
{
	struct student
	{
		char name[20];
		int a;
		int b;
		char c;
		char d;
		int e;
		struct student*next;
	}student[100];
	int N,i,money[100],max,sum,flag;
	max=sum=0;
	for(i=0;i<100;i++)
	{
		money[i]=0;
	}
	struct student *p;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		student[i].next=&student[i+1];
	}
	student[N-1].next=NULL;
	p=&student[0];
	i=0;
	while(p!=NULL)
	{
		scanf("%s %d %d %c %c %d",p->name,&p->a,&p->b,&p->c,&p->d,&p->e);
		if((p->a)>80&&(p->e)>0)
			money[i]+=8000;
		if((p->a)>85&&(p->b)>80)
			money[i]+=4000;
		if((p->a)>90)
			money[i]+=2000;
		if((p->a)>85&&(p->d)=='Y')
			money[i]+=1000;	
		if((p->b)>80&&(p->c)=='Y')
			money[i]+=850;
		i++;
		p=p->next;
	}
	for(i=0;i<N;i++)
	{
		if(money[i]>max)
		{
			max=money[i];
			flag=i;
		}
	}
	printf("%s\n",student[flag].name);
	printf("%d\n",max);
	for(i=0;i<N;i++)
	{
		sum+=money[i];
	}
	printf("%d",sum);
	return 0;
}