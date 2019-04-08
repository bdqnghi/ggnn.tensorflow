int main()
{
	struct student
	{
		char s[500];
		struct student *next;
	}stu[2000],stup[2000];
	int i=0,j;
	struct student *p1,*p2,*head;
	p1=p2=(struct student *)malloc(LEN);
	head=NULL;
	gets(p1->s);
	while((*(p1->s)+0)!='e')
	{
		stu[i]=*p1;
		if(++i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		gets(p1->s);
	}
	p2->next=NULL;
	for(j=0;j<i;j++) stup[j]=stu[i-1-j];
	for(j=0;j<i;j++) printf("%s\n",stup[j].s);
	return 0;
}