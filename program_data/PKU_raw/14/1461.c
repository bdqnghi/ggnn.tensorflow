struct student
{
	int No;
	int chinese;
	int math;
	int all;
}stu[STUDENT_NUM],temp;

void main()
{
	int n;
	scanf("%d",&n);
	int i,k;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].No,&stu[i].chinese,&stu[i].math);
		stu[i].all=stu[i].chinese+stu[i].math;
	}
	for(k=1;k<4;k++){
		for(i=0;i<n-k;i++){
			if(stu[i].all>=stu[i+1].all){
				temp=stu[i+1];
				stu[i+1]=stu[i];
				stu[i]=temp;
			}
		}
	}
	for(i=n-1;i>n-4;i--){
		printf("%d %d\n",stu[i].No,stu[i].all);
	}
}