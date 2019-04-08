struct student{
	char name[25];
	int qimo;
	int banji;
	char ganbu[2];
	char xibu[2];
	int lunwen;
	int money;
}stu[102]={0};
struct student temp;
void main()
{
	int i,j,n,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d%d%s%s%d",&stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
		if(stu[i].qimo>80&&stu[i].lunwen>=1)
			stu[i].money=stu[i].money+8000;
		if(stu[i].qimo>85&&stu[i].banji>80)
			stu[i].money=stu[i].money+4000;
		if(stu[i].qimo>90)
			stu[i].money=stu[i].money+2000;
		if(stu[i].qimo>85&&stu[i].xibu[0]=='Y')
			stu[i].money=stu[i].money+1000;
		if(stu[i].banji>80&&stu[i].ganbu[0]=='Y')
			stu[i].money=stu[i].money+850;
	}
	for(i=0;i<n;i++)
		sum=sum+stu[i].money;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(stu[j].money<stu[j+1].money){
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
	printf("%s\n%d\n%d\n",stu[0].name,stu[0].money,sum);
}
