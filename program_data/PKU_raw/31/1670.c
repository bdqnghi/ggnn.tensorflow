int num=0;
void main()
{
	struct student
	{
		char xh[100];
		char xm[100];
		char xb;
		int nl;
		float df;
		char dz[100];
		struct student *af;
		struct student *bf;
	};
	int i,j,k,m,n;
	struct student *p1,*p2,*p3,*p4,*head;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	scanf("%s %s %c %d %f %s",p1->xh,p1->xm,&p1->xb,&p1->nl,&p1->df,p1->dz);
	p1->bf=0;
	while(strcmp(p2->xh,"end")!=0)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%s",p1->xh);
		if(strcmp(p1->xh,"end")==0)
		{
			head=p2;
			p1->bf=p2;
			p2->af=p1;
			p2=p1;
			num++;
			p1->af=0;
			break;
		}
		scanf("%s %c %d %f %s",p1->xm,&p1->xb,&p1->nl,&p1->df,p1->dz);
		p1->bf=p2;
		p2->af=p1;
		p2=p1;
		num++;
	}
	//if(strcmp(p1->xh,"end")==0)p1->af=0;
	//printf("%d",num);
	p1=head;
	//printf("%c",p1->xb);
	for(i=0;i<num;i++)
	{
		printf("%s %s %c %d %g %s\n",p1->xh,p1->xm,p1->xb,p1->nl,p1->df,p1->dz);
		p1=p1->bf;
	}
	
}