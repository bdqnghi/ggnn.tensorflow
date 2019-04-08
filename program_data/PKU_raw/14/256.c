
struct student{
	int No;
	int yuwen;
	int shuxue;
	int sum;
};



int main(){
	
	
	int n,i,k,e,f;

	scanf("%d",&n);

	struct student *stu=(struct student*)malloc(sizeof(int)*4*n);

	for(i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].No,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].sum=stu[i].yuwen+stu[i].shuxue;
	}
	
	for(k=0;k<3;k++){
		for(i=n-1;i>k;i--){
			if(stu[i-1].sum<stu[i].sum){
			e=stu[i-1].sum;
			stu[i-1].sum=stu[i].sum;
			stu[i].sum=e;
			f=stu[i-1].No;
			stu[i-1].No=stu[i].No;
			stu[i].No=f;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d %d\n",stu[i].No,stu[i].sum);
	}
	

	return 0;
}


