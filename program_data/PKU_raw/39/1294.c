struct student
{char name[20];
 int qimo;
 int banji;
 char xs;
 char xb;
 int lw;
};

int f(struct student *p)
{
	int num=0;
	if(((p->qimo)>80)&&((p->lw)>=1))
		num=num+8000;
	if(((p->qimo)>85)&&((p->banji)>80))
		num=num+4000;
	if((p->qimo)>90)
		num=num+2000;
	if(((p->qimo)>85)&&((p->xb)=='Y'))
		num=num+1000;
	if(((p->banji)>80)&&((p->xs)=='Y'))
		num=num+850;
	return num;
}



void main()
{
	int f(struct student *p);
	struct student stu[100],*p;
	int n,i,a[100]={0},*ap,b=0,k,m;
	p=stu;ap=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%s %d %d %c %c %d",p->name,&p->qimo,&p->banji,&p->xs,&p->xb,&p->lw);
		p=p+1;
	}
	p=stu;
	for(i=0;i<n;i++)
	{
		
		*(ap+i)=f(p+i);
		b=b+(*(ap+i));
	}


	k=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{	k=a[i];m=i;}
	}
	printf("%s\n%d\n%d\n",(stu+m)->name,k,b);
}