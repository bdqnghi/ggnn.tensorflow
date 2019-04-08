struct student
{
  char name[20];
  int qimo;
  int banji;
  char ganbu;
  char xisheng;
  int lunwen;
 }stu[300];
int main(){
int n,m,i,sum=0;
int money[300];
char a[20];
scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].ganbu,&stu[i].xisheng,&stu[i].lunwen);
}
for(i=0;i<n;i++){
		money[i]=0;
	if(stu[i].qimo>80&&stu[i].lunwen>0){
		money[i]=money[i]+8000;
	}
	if(stu[i].qimo>85&&stu[i].banji>80){
		money[i]=money[i]+4000;
	}
	if(stu[i].qimo>90){
		money[i]=money[i]+2000;
	}
	if(stu[i].qimo>85&&stu[i].xisheng=='Y'){
		money[i]=money[i]+1000;
	}
	if(stu[i].banji>80&&stu[i].ganbu=='Y'){
		money[i]=money[i]+850;
	}
		sum=sum+money[i];
}

strcpy(a,stu[0].name);
m=money[0];
for(i=1;i<n;i++){
	if(money[i]>m){
		m=money[i];
		strcpy(a,stu[i].name);
	}
}
printf("%s\n%d\n%d\n",a,m,sum);

return 0;
}

