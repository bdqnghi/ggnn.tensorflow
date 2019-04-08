struct student
	{
		int num;
		int chi;
		int mat;
		int sum;
	}stu[100000];
void main()
{
	
	int i,n,max=0,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++) {scanf("%d %d %d",&stu[i].num,&stu[i].chi,&stu[i].mat);stu[i].sum=stu[i].chi+stu[i].mat;}
	for(k=0;k<3;k++)
	{
		for(i=0;i<n;i++) if(stu[i].sum>max) {max=stu[i].sum;m=i;}
		printf("%d %d\n",stu[m].num,stu[m].sum);
		stu[m].sum=0;
		max=0;
	}
}
