struct student{
	char name[20];
	int num[6];
	char xx[3];
	int sum;
}stu[1000];
char cc[10];
int main(){
	int t,k,x[10000]={0},n,min=10000,max=0,min1=0,max1=0,a=0,b,c,d,i,j,tp,sum1=0;
	scanf("%d",&n);
	scanf("%c",&cc[1]);
	for(i=1;i<=n;i++){
		scanf("%s%c%d%c%d",stu[i].name,&cc[1],&stu[i].num[1],&cc[2],&stu[i].num[2]);
		scanf("%c%c%c%c%c%d%c",&cc[1],&stu[i].xx[1],&cc[2],&stu[i].xx[2],&cc[3],&stu[i].num[3],&cc[6]);
stu[i].sum=0;
if(stu[i].num[1]>80&&stu[i].num[3]>=1)stu[i].sum+=8000;
if(stu[i].num[1]>85&&stu[i].num[2]>80)stu[i].sum+=4000;
if(stu[i].num[1]>90)stu[i].sum+=2000;
if(stu[i].num[1]>85&&stu[i].xx[2]=='Y')stu[i].sum+=1000;
if(stu[i].num[2]>80&&stu[i].xx[1]=='Y')stu[i].sum+=850;
sum1+=stu[i].sum;
if(stu[i].sum>max){
	max=stu[i].sum;
	max1=i;
}
	}
printf("%s\n%d\n%d",stu[max1].name,stu[max1].sum,sum1);
}
	


