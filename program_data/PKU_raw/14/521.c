struct student
{
	int id;
	int chinese;
	int math;
}stu[100000];

void bubble(struct student stu[],int n)
{
	int pass,i;
	struct student temp;
	
	for(pass=n-1;pass>=n-3;pass--)
		for(i=pass;i>0;i--)
			if(stu[i].chinese+stu[i].math>stu[i-1].chinese+stu[i-1].math)
			{
				temp=stu[i];
				stu[i]=stu[i-1];
				stu[i-1]=temp;
			}
}


int main()
{
	struct student *p;
	int i;
	int n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&stu[i].id,&stu[i].chinese,&stu[i].math);
	bubble(stu,n);
	for(p=stu;p<stu+3;p++)
		printf("%d %d%c",p->id,p->chinese+p->math,(p==stu+n-1)?'\0':'\n');
	return 0;
}