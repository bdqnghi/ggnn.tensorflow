
struct stu
{
	char name[21];
	int s1;
	int s2;
	char g;
	char x;
	int l;
	int m;
}stu[101];

int main(int argc, char* argv[])
{
	int n,i,j,sum=0,len,max=0,num;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].g,&stu[i].x,&stu[i].l);
		stu[i].m=0;
		if(stu[i].s1>80&&stu[i].l>=1){
			stu[i].m+=8000;
		}
		if(stu[i].s1>85&&stu[i].s2>80){
			stu[i].m+=4000;
		}
		if(stu[i].s1>90){
			stu[i].m+=2000;
		}
		if(stu[i].s1>85&&stu[i].x=='Y'){
			stu[i].m+=1000;
		}
		if(stu[i].s2>80&&stu[i].g=='Y'){
			stu[i].m+=850;
		}
		sum+=stu[i].m;
		if(stu[i].m>max){
			max=stu[i].m;
			num=i;
		}
	}
	printf("%s\n%d\n%d",stu[num].name,stu[num].m,sum);
	return 0;
}
