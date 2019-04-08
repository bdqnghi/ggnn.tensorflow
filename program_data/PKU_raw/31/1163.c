struct student
{
	struct student *pre;
	char mess[500];
};
void main()
{
	int n=0;
	struct student *p1,*p2,*p;
	p1=(struct student *)malloc(LEN);
	while(strcmp(gets(p1->mess),"end")!=0)
	{
		n=n+1;
		if(n==1) 
			p1->pre=NULL;
		else
			p1->pre=p2;
			p2=p1;
			p1=(struct student *)malloc(LEN);
	}
	p=p2;
	do
	{
		printf("%s\n",p->mess);
		p=p->pre;
	}while(p!=NULL);

}
