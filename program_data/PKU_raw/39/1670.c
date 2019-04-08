struct scholarship
{
	char name[21];
	short mark;
	short judge;
	char cadre;
	char west;
	short paper;
	int ss;
}stu[100];
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].mark,&stu[i].judge,&stu[i].cadre,&stu[i].west,&stu[i].paper);
		stu[i].ss=0;
		if(stu[i].mark>80&&stu[i].paper>=1){
			stu[i].ss=stu[i].ss+8000;
		}
		if(stu[i].mark>85&&stu[i].judge>80){
			stu[i].ss=stu[i].ss+4000;
		}
		if(stu[i].mark>90){
			stu[i].ss=stu[i].ss+2000;
		}
		if(stu[i].mark>85&&stu[i].west=='Y'){
			stu[i].ss=stu[i].ss+1000;
		}
		if(stu[i].judge>80&&stu[i].cadre=='Y'){
			stu[i].ss=stu[i].ss+850;
		}
	}
	int max=stu[0].ss;
	int a=0;
	int total=0;
	for(i=0;i<n;i++){
		if(stu[i].ss>max){
			max=stu[i].ss;
			a=i;
		}
		total=total+stu[i].ss;
	}
	printf("%s\n%d\n%d\n",stu[a].name,stu[a].ss,total);
	return 0;
}