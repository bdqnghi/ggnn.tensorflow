
struct stu
{
	char name[21];
	int avs;
	int pys;
	char gb;
	char xb;
	int lw;
} stu[100];

main()
{
	int n,i,max,maxstu,sum;
	int jj[100];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].avs,&stu[i].pys,&stu[i].gb,&stu[i].xb,&stu[i].lw);
		jj[i]=0;
		if(stu[i].avs>80&&stu[i].lw>0){
			jj[i]+=8000;
		}
		if(stu[i].avs>85&&stu[i].pys>80){
			jj[i]+=4000;
		}
		if(stu[i].avs>90){
			jj[i]+=2000;
		}
		if(stu[i].avs>85&&stu[i].xb=='Y'){
			jj[i]+=1000;
		}
		if(stu[i].pys>80&&stu[i].gb=='Y'){
			jj[i]+=850;
		}
	}

	max=jj[0];
	maxstu=0;
	sum=jj[0];
	for(i=1;i<n;i++){
		if(jj[i]>max){
			max=jj[i];
			maxstu=i;
		}
		sum+=jj[i];
	}

	printf("%s\n%d\n%d\n",stu[maxstu].name,max,sum);
}