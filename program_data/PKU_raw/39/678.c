
struct student{
	char name[21];
	int qimo;
	int banji;
	char ganbu;
	char west;
	int article;
	int total;
};

int main(){
	int n,i,max,sum;

	scanf("%d",&n);

	struct student *stu=(struct student *)malloc(sizeof(int)*4*n+sizeof(char)*23*n);
	
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].ganbu,&stu[i].west,&stu[i].article);
		stu[i].total =0;
	}


	for(i=0;i<n;i++){
		if(stu[i].qimo>80&&stu[i].article>0){
			stu[i].total +=8000;
		}
		if(stu[i].qimo>85&&stu[i].banji>80){
			stu[i].total +=4000;
		}
		if(stu[i].qimo>90){
			stu[i].total+=2000;
		}
		if(stu[i].qimo >85&&stu[i].west=='Y'){
			stu[i].total +=1000;
		}
		if(stu[i].banji >80&&stu[i].ganbu =='Y'){
			stu[i].total +=850;
		}
	}
	max=stu[0].total ;
	sum=0;
	for(i=0;i<n;i++){
		if(stu[i].total>max){
			max=stu[i].total ;
		}
		sum+=stu[i].total ;
	}
	for(i=0;i<n;i++){
		if(max==stu[i].total){
			printf("%s\n%d\n%d\n",stu[i].name,max,sum);
			break;
		}
	}

	return 0;
	
}