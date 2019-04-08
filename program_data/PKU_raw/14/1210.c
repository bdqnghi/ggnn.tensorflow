void main()
{   int m1,m2,m3,n1,n2,n3;
	struct student{int num;int verbal;int math;int sum;};
	struct student stu[100000];
	struct student *p;
		p=stu;

	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d %d %d",&(p+i)->num,&(p+i)->verbal,&(p+i)->math);
	for(i=0;i<n;i++)
    (p+i)->sum=(p+i)->verbal+(p+i)->math;
	m1=p->sum;n1=0;
	for(i=0;i<n;i++)
		if(((p+i)->sum)>m1)
		{m1=(p+i)->sum;
		n1=i;}
		printf("%d %d\n",(p+n1)->num,(p+n1)->sum);
    m2=p->sum;n2=0;
	for(i=0;i<n;i++)
	if(((p+i)->sum)>m2&&i!=n1)
		{m2=(p+i)->sum;
		n2=i;}
		printf("%d %d\n",(p+n2)->num,(p+n2)->sum);
	
	m3=p->sum;n3=0;
	for(i=0;i<n;i++)
		if((((p+i)->sum)>m3)&&i!=n1&&i!=n2)
		{m3=(p+i)->sum;
		n3=i;}
		printf("%d %d\n",(p+n3)->num,(p+n3)->sum);
	

}


