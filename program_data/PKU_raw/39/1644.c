struct scholar
{
	char name[20];
	int test;
	int cm;
	char leader;
	char west;
	int paper;
}stu[100];
int main()
{
	int i,n,max,s,f;
	int money[100]={0};
	i=0;
	f=0;
	max=0;
	s=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%s%d%d%",stu[i].name,&(stu[i].test),&(stu[i].cm));
		scanf(" %c",&(stu[i].leader));
		scanf(" %c",&(stu[i].west));
		scanf(" %d",&(stu[i].paper));
	}
	for(i=0;i<=n-1;i++){
		if(stu[i].test>80&&stu[i].paper>=1){
			money[i]=money[i]+8000;
		}
		if(stu[i].test>85&&stu[i].cm>80){
			money[i]=money[i]+4000;
		}
		if(stu[i].test>90){
			money[i]=money[i]+2000;
		}
		if(stu[i].test>85&&stu[i].west=='Y'){
			money[i]=money[i]+1000;
		}
		if(stu[i].cm>80&&stu[i].leader=='Y'){
			money[i]=money[i]+850;
		}
	}
	for(i=0;i<=n-1;i++){
		if(money[i]>max){
			max=money[i];
			f=i;
		}
	}
	for(i=0;i<=n-1;i++){
		s=s+money[i];
	}
	printf("%s\n%d\n%d\n",stu[f].name,max,s);
	return 0;
}
