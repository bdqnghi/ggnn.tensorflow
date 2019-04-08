struct student
{
	char name[21];
	int term;
	int access;
	char ganbu;
	char west;
	int paper;
	int all;
}stu[100];
main()
{
	int N;
	scanf("%d",&N);
	int i;
	for(i=0;i<N;i++){
		scanf("%s%d%d%s%s%d",&stu[i].name,&stu[i].term,&stu[i].access,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
	}
	for(i=0;i<N;i++){
		stu[i].all=0;
		if(stu[i].term>80&&stu[i].paper>=1){ 
			stu[i].all=stu[i].all+8000;
		}
		if(stu[i].term>85&&stu[i].access>80){
			stu[i].all=stu[i].all+4000;
		}
		if(stu[i].term>90){
			stu[i].all=stu[i].all+2000;
		}
		if(stu[i].term>85&&stu[i].west=='Y'){
			stu[i].all=stu[i].all+1000;
		}
		if(stu[i].ganbu=='Y'&&stu[i].access>80){
			stu[i].all=stu[i].all+850;
		}
	}
	int max=0;
	int total=0,k;
	for(i=0;i<N;i++){
		total+=stu[i].all;
		if(max<stu[i].all){
			max=stu[i].all;
			k=i;
		}
	}
	printf("%s\n%d\n%d\n",stu[k].name,stu[k].all,total);
}