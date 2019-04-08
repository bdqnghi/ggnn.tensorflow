struct student
{
	char name[20];
	int score;
	int judge;
	char c1;
	char c2;
	char num;
	int money;
};
int main()
{
	struct student a[501];
	char s1[20];
	int i,n,max=0,sum=0;
	int score1,num1,judge1;
	char c11,c12;
	struct student *p;
	p=a;
	scanf("%d",&n);
	for(;p<a+n;p++)
	{
		scanf("%s",s1);
		strcpy(p->name,s1);
		scanf("%d %d %c %c %d",&score1,&judge1,&c11,&c12,&num1);
		p->c1=c11;
		p->c2=c12;
		p->judge=judge1;
		p->num=num1;
		p->score=score1;
		p->money=0;
	}
	p=a;
	for(;p<a+n;p++)
	{
		if(p->score>80&&p->num>0) p->money+=8000;
		if(p->judge>80&&p->score>85) p->money+=4000;
		if(p->score>90) p->money+=2000;
		if(p->c1=='Y'&&p->judge>80) p->money+=850;
		if(p->c2=='Y'&&p->score>85) p->money+=1000;
	}
	p=a;
	for(;p<a+n;p++)
	{
		if(p->money>max) max=p->money;
		sum+=p->money;
	}
	p=a;
	for(;p<a+n;p++)
	{
		if(p->money==max) 
		{
			printf("%s\n%d\n",p->name,p->money);
			break;
		}
	}
	printf("%d\n",sum);
	return 0;
}