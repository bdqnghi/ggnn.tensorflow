void main()
{
	int i,j,k,m,n;
	struct stu
	{
		char xh[100];
		char xm[100];
		char xb;
		int nl;
		float df;
		char dz[100];
		struct stu *af;
		struct stu *bf;
	};
	struct stu *p1,*p2,*head;
	head=p2=p1=(struct stu *)malloc(sizeof(struct stu));
	scanf("%s %s %c %d %f %s",p1->xh,p1->xm,&p1->xb,&p1->nl,&p1->df,p1->dz);
	p1->bf=0;
	for(i=1;;i++)
	{
		p1=(struct stu *)malloc(sizeof(struct stu));
		scanf("%s",p1->xh);
		if(strcmp(p1->xh,"end")==0)
		{
			head=p2;
			break;
		}
		scanf("%s %c %d %f %s",p1->xm,&p1->xb,&p1->nl,&p1->df,p1->dz);
		p2->af=p1;
		p1->bf=p2;
		p2=p1;
	}
	p1=head;
	for(j=0;j<i;j++)
	{
		printf("%s %s %c %d %g %s\n",p1->xh,p1->xm,p1->xb,p1->nl,p1->df,p1->dz);
		p1=p1->bf;
	}
}