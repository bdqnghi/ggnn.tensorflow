
struct student{
	char name[20];
	int f_gra;
	int c_gra;
	char ganbu;
	char xibu;
	int paper;
}stu[100];

int main(int argc, char* argv[])
{
	int i,n,sum=0;	
	scanf("%d",&n);
	int *scho=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].f_gra,&stu[i].c_gra,&stu[i].ganbu,&stu[i].xibu,&stu[i].paper);
		scho[i]=0;
	}

	for(i=0;i<n;i++){
		if(stu[i].f_gra>80&&stu[i].paper>0){
			scho[i]=scho[i]+8000;
			sum=sum+8000;
		}
		if(stu[i].f_gra>85&&stu[i].c_gra>80){
			scho[i]=scho[i]+4000;
			sum=sum+4000;
		}
		if(stu[i].f_gra>90){
			scho[i]=scho[i]+2000;
			sum=sum+2000;
		}
		if(stu[i].f_gra>85&&stu[i].xibu=='Y'){
			scho[i]=scho[i]+1000;
			sum=sum+1000;
		}
		if(stu[i].c_gra>80&&stu[i].ganbu=='Y'){
			scho[i]=scho[i]+850;
			sum=sum+850;
		}		
	}

	int max=scho[0],goal;
	for(i=0;i<n;i++){
		if(scho[i]>max){
			max=scho[i];
			goal=i;
		}
	}
	printf("%s\n%d\n%d\n",stu[goal].name,max,sum);

	free(scho);
	return 0;
}
