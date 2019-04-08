struct student{
char name[21];
int pingjun;
int banyi;
char ganbu;
char west;
int paper;
}stu[120];
void scholar(struct student *p,int a); 

int main(){
	int n,i;
	struct student *pointer1;
	pointer1=stu;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].pingjun,&stu[i].banyi,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
	}
	scholar(pointer1,n);
	return 0;
}
void scholar(struct student *p,int a){
	int sums,sum=0,max=0;
	int j,jishu=0;
	for(j=0;j<a;j++){
		sums=0;
		if(((p+j)->pingjun>80)&&((p+j)->paper>0)){
			sums+=8000;
		}
		if(((p+j)->pingjun>85)&&((p+j)->banyi>80)){
			sums+=4000;
		}
		if((p+j)->pingjun>90){
			sums+=2000;		
		}
		if(((p+j)->pingjun>85)&&((p+j)->west=='Y')){
			sums+=1000;		
		}
		if(((p+j)->banyi>80)&&((p+j)->ganbu=='Y')){
			sums+=850;		
		}
		sum+=sums;
		if(sums>max){
			max=sums;
			jishu=j;
		}
	}
	printf("%s\n%d\n%d",(p+jishu)->name,max,sum);

}