int main()
{
     struct student
	 {
		 char name[20];
		 int a,b,lunwen;
		 char ganbu,xibu;
	 int jiangjin;
	 }stu[100];
	 int n,i,t=0;
	 long int sum=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s%d%d %c %c%d",&stu[i].name,&stu[i].a,&stu[i].b,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);}


for(i=0;i<n;i++){stu[i].jiangjin=0;


	if(stu[i].a>80&&stu[i].lunwen>0){stu[i].jiangjin=stu[i].jiangjin+8000;}
	if(stu[i].a>85&&stu[i].b>80){stu[i].jiangjin=stu[i].jiangjin+4000;}
    if(stu[i].a>90){stu[i].jiangjin=stu[i].jiangjin+2000;}
    if(stu[i].a>85&&stu[i].xibu=='Y'){stu[i].jiangjin=stu[i].jiangjin+1000;}
    if(stu[i].b>80&&stu[i].ganbu=='Y'){stu[i].jiangjin=stu[i].jiangjin+850;}}
for(i=0;i<n;i++){
	if(stu[i].jiangjin>stu[t].jiangjin){t=i;}}
for(i=0;i<n;i++){
	sum=sum+stu[i].jiangjin;}
printf("%s\n%d\n%ld",stu[t].name,stu[t].jiangjin,sum);


            return 0;
              }