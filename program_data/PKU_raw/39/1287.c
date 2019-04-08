
int main(int argc, char* argv[])
{
	int n,i,b=0,sum=0,max;
	struct student{
		char name[21];
		int mc;
		int bc;
		char bg;
		char xb;
		int lw;
		int sch;
	}stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		stu[i].sch=0;
		scanf("%s%d%d %c %c%d",&stu[i].name,&stu[i].mc,&stu[i].bc,&stu[i].bg,&stu[i].xb,&stu[i].lw);
		if(stu[i].mc>80&&stu[i].lw>0){
			stu[i].sch=8000;
			sum+=8000;
		}
		if(stu[i].mc>85&&stu[i].bc>80){
			stu[i].sch+=4000;
			sum+=4000;
		}
		if(stu[i].mc>90){
			stu[i].sch+=2000;
			sum+=2000;
		}
		if(stu[i].mc>85&&stu[i].xb=='Y'){
			stu[i].sch+=1000;
			sum+=1000;
		}
		if(stu[i].bc>80&&stu[i].bg=='Y'){
			stu[i].sch+=850;
			sum+=850;
		}
	}
	max=stu[0].sch;
	for(i=0;i<n;i++){
		if(max<stu[i].sch){
			max=stu[i].sch;
			b=i;
		}
	}
	printf("%s\n%d\n%d\n",stu[b].name,stu[b].sch,sum);
	return 0;
}