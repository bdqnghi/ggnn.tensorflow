
struct student{
	char name[20];
	int gra1;
	int gra2;
	char ganbu;
	char west;
	int paper;
	int award;
}stu[100];
void main()
{
 int n,i,sum=0;
 scanf("%d",&n);

 for(i=0;i<n;i++){
  scanf("%s",stu[i].name);
  scanf("%d%d%s%s%d",&stu[i].gra1,&stu[i].gra2,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
 }
 for(i=0;i<n;i++){
  if(stu[i].gra1>80&&stu[i].paper>=1){
	  stu[i].award+=8000;
  }
  if(stu[i].gra1>85&&stu[i].gra2>80){
	  stu[i].award+=4000;
  }
  if(stu[i].gra1>90){
	  stu[i].award+=2000;
  }
  if(stu[i].gra1>85&&stu[i].west=='Y'){
	  stu[i].award+=1000;
  }
  if(stu[i].ganbu=='Y'&&stu[i].gra2>80){
	  stu[i].award+=850;
 }
  sum+=stu[i].award ;
 }


  int max=stu[0].award;
  char best[20];
  for(i=0;i<n;i++){
	  if(stu[i].award>max){
		  max=stu[i].award;
		  strcpy(best,stu[i].name);
	  }
  }
  printf("%s\n%d\n%d",best,max,sum);
 }

