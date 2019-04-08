	struct student
	{
		char number[10];
		char name[100];
		char sex;
		int age;
		char score[20];
		char add[20];
		struct student *pre;
	};
int n;

	struct student *creat(void)
	{
		struct student *tail;
		struct student *p1,*p2;
		n=0;
		p1=p2=(struct student *)malloc(sizeof(struct student));
		scanf("%s %s %c %d %s %s",p1->number,p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		p1->pre=NULL;
		while(1)
		{
			n++;
			tail=p1;
			p1=(struct student *)malloc(sizeof(struct student));
			scanf("%s",p1->number);
			if(strcmp(p1->number,"end")==0)
				break;
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
			p1->pre=p2;
			p2=p1;
		}
		return(tail);
	}

    void print(struct student *tail)
	{
		struct student *p;
		p=tail;
			do
			{
			  printf("%s %s %c %d %s %s\n",p->number,p->name,p->sex,p->age,p->score,p->add);
			  p=p->pre;
			}while(p!=NULL);
	}

	void main()
	{
		print(creat());
	}