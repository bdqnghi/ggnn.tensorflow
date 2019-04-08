struct student
{
	char num[30];
	char name[30];
	char sex;
	int age;
	char score[20];
	char add[30];
	struct student *next;
};
int main()
{
	struct student *p,*p1;
	int n=0;
	p=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",p->num,p->name,&p->sex,&p->age,p->score,p->add);
	//printf("%s %s %c %d %f %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
//printf("%c\n",p->num[0]);
	while(1)
	{
		n++;
		if(n==1) p->next=NULL;
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		//printf("%s\n",p1->num);
		if(strcmp(p1->num,"end")==0) break;
		else scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		//printf("%s %s %c %d %f %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1->next=p;
		p=p1;
		//printf("%d\n",n);
	}
	//printf("%d\n",n);
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
		p=p->next;
	}
	return 0;
}



