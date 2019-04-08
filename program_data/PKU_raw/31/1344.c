struct student{
		char name[100];
		char ind[100];		
		char sex;
		int age;
		float score;
		char dizhi[100];
		struct student *next;
};//?? ?? ?? ?? ?? ?? 
int n;
struct student *creat()
{
	struct student *p1,*p2;
	n=0;
	p1=(struct student *)malloc(LEN);
	p2=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %f %s",&p1->ind,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->dizhi);
	p1->next=0;
	while(strcmp(p2->ind,"end")!=0)
	{
		n++;
		if(n==1)scanf("%s %s %c %d %f %s",&p2->ind,&p2->name,&p2->sex,&p2->age,&p2->score,&p2->dizhi);
		else scanf("%s %c %d %f %s",&p2->name,&p2->sex,&p2->age,&p2->score,&p2->dizhi);
		p2->next=p1;
		p1=p2;
		p2=(struct student *)malloc(LEN);
		scanf("%s",&p2->ind);

	}
	return p1;
}
void main()
{
	struct student *wr;
	wr=creat();
	printf("%s %s %c %d %g %s\n",wr->ind,wr->name,wr->sex,wr->age,wr->score,wr->dizhi);
       //printf("10630018 zouan m 20 10 28#46000\n");
	while(wr->next!=0){
				wr=wr->next;
		printf("%s %s %c %d %g %s\n",wr->ind,wr->name,wr->sex,wr->age,wr->score,wr->dizhi);

		}

}