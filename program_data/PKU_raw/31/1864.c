struct student
	{
		char num[10],name[50],addr[50],score[10],sex;
		int age;
		struct student *before;
	};
void main()
{
	struct student *p1=0,*p2;
	p2=(struct student *)malloc(len);
	while(scanf("%s %s %c %d %s %s",p2->num,p2->name,&(p2->sex),&(p2->age),p2->score,p2->addr)!=EOF)
	{
		if(p2->num[0]=='e')
			break;
		p2->before=p1;
		p1=p2;
		//printf("%s %s %c %d %d %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->addr);
		p2=(struct student *)malloc(len);
	}
	p2=p1;
	while(p2!=0)
	{
		printf("%s %s %c %d %s %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->addr);
		p2=p2->before;
	}
	getchar();
	getchar();
}