struct student
{
	int no;
	int yuwen;
	int shuxue;
	int total;
};
void main()
{
	int n,i;
	struct student *p,*stu,temp;
	scanf("%d",&n);
	stu=(struct student *)calloc(n,sizeof(struct student));
	for(p=stu;p-stu<n;p++)
	{
		scanf("%d%d%d",&p->no,&p->yuwen,&p->shuxue);
		p->total=p->yuwen+p->shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(p=stu+n-1;p>stu+i;p--)
		{
			if(p->total>(p-1)->total)
			{
				temp=*p;
				*p=*(p-1);
				*(p-1)=temp;
			}
		}
		printf("%d %d\n",p->no,p->total);
	}
	free(stu);
}