struct student
{
	int num;
	float yuwen;
	float shuxue;
	float zongfen;
}stu[student_num],*p[3];
void main()
{
	void paixu(struct student *a,int n);
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%f%f",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
	}
	paixu(stu,n);
	for(i=0;i<3;i++)printf("%d %.0f\n",p[i]->num,p[i]->zongfen);
}
void paixu(struct student *a,int n)
{
	int i,j;
	float x[3];
	for(i=0;i<3;i++)
	{
		for(j=1,p[i]=a;j<n;j++)if(p[i]->zongfen<(a+j)->zongfen)p[i]=a+j;
		x[i]=p[i]->zongfen;
		p[i]->zongfen=0;
	}
	for(i=0;i<3;i++)p[i]->zongfen=x[i];
}