struct stu
{
	char num[100];
	char name[100];
	char sex[3];
	char age[10];
	char score[10];
	char ad[100];
	struct stu*next;
	struct stu*pre;
};
int main(int argc, char* argv[])
{
	int cal=0,i=0;
	char end[100];
	struct stu*head,*p1,*p2;
	p1=(struct stu*)malloc(len);
	scanf(" %s %s %s %s %s %s",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->ad);
	p1->next=NULL;
	p1->pre=NULL;
	head=p1;
	p2=p1;
	while(1)
	{
		scanf("%s",end);
		if(end[0]=='e')
		{break;}
		p1=(struct stu*)malloc(len);
		strcpy(p1->num,end);
		scanf("%s %s %s %s %s",p1->name,p1->sex,p1->age,p1->score,p1->ad);
		cal++;
		p1->next=NULL;
		p1->pre=p2;
		p2->next=p1;
		p2=p1;
	}
	while(p2)
	{
		printf("%s %s %s %s %s %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->ad);
		p1=p2;
		p2=p2->pre;
		free(p1);
	}
	return 0;
}
