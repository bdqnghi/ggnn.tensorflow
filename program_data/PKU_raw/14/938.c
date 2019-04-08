struct info
	{
		char num[10];
		int chn;
		int math;
		struct info *next;
	};
int n,all;
struct info *setup(void)
{
	struct info *head,*p1,*p2;
	n=0;
	while(n<all)
	{
		p1=(struct info*)malloc(sizeof(struct info));
		scanf("%s %d %d",p1->num,&p1->chn,&p1->math);
		n+=1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;				
	}
	p2->next=NULL;
	return(head);
}
void main()
{
	
	struct info *p;
	int i,first=0,second=0,third=0;
	char fnum[10],snum[10],tnum[10];
	scanf("%d",&all);
	p=setup();
	do
	{
		if(TOTAL>first)
		{
			third=second;
			second=first;
			first=TOTAL;
			strcpy(tnum,"");
			strcat(tnum,snum);
			strcpy(snum,"");
			strcat(snum,fnum);
			strcpy(fnum,"");
			strcat(fnum,p->num);
		}
		else if(TOTAL>second)
		{
			third=second;
			second=TOTAL;
			strcpy(tnum,"");
			strcat(tnum,snum);
			strcpy(snum,"");
			strcat(snum,p->num);
		}
		else if(TOTAL>third)
		{
			third=TOTAL;
			strcpy(tnum,"");
			strcat(tnum,p->num);
		}
		p=p->next;
	}while(p!=NULL);
	printf("%s %d\n%s %d\n%s %d\n",fnum,first,snum,second,tnum,third);
}