struct Student
{
	char name[20];
	int marks1;
	int marks2;
	char a;
	char b;
	int paper;
	int total;
}person[100],best={"\0",0,0,'\0','\0',0};
int main()
{
	int n,i,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",person[i].name,&person[i].marks1,&person[i].marks2,&person[i].a,&person[i].b,&person[i].paper);
		person[i].total=0;
		if(person[i].marks1>80&&person[i].paper>0){person[i].total=person[i].total+8000;}
		if(person[i].marks1>85&&person[i].marks2>80){person[i].total=person[i].total+4000;}
		if(person[i].marks1>90){person[i].total=person[i].total+2000;}
		if(person[i].marks1>85&&person[i].b=='Y'){person[i].total=person[i].total+1000;}
		if(person[i].marks2>80&&person[i].a=='Y'){person[i].total=person[i].total+850;}
		if(person[i].total>best.total){best=person[i];}
		total=total+person[i].total;
	}
	printf("%s\n%d\n%d",best.name,best.total,total);
}
