struct student
{
	char xuehao[200];
	char name[300];
	char xingbie;
	char age[20];
	char grade[20];
	char dizhi[200];
	struct student *next;
};
int main()
{
	int i;
	int n=0;
    struct student *tail;
	struct student *p1,*p2,*p;
	tail=NULL;
	p1=p2=NULL;  	
	for(i=1;;)
	{
		p1=(struct student*)malloc(LEN);
		p1->next=p2;
		scanf("%s",p1->xuehao);
		if(strcmp(p1->xuehao,"end")==0)
		{
			tail=p2;
			     break;
		}
		scanf("%s",p1->name);
		getchar();
		scanf("%c",&p1->xingbie);
		scanf("%s",p1->age);
		scanf("%s",p1->grade);
		scanf("%s",p1->dizhi);
		p2=p1;
        i++;
	}
	n=i-1;
A:  p=tail;
    for(;p!=NULL;)
	{
		printf("%s %s %c %s %s %s\n",p->xuehao,p->name,p->xingbie,p->age,p->grade,p->dizhi);
		p=p->next;
	}
	return 0;
}




