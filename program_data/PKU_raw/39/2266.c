main()
{
struct scholarship{
       char name[200];
       int gpa,mate,paper;
       char official,west;
       }stu[100];
int n,sch[100],i,max;
long sum=0;
char num[4];
for(i=0;i<100;i++){
   sch[i]=0;
   }
gets(num);
n=atoi(num);
for(i=0;i<n;i++){
   scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].gpa,&stu[i].mate,&stu[i].official,&stu[i].west,&stu[i].paper);
   }
for(i=0;i<n;i++){
   if(stu[i].gpa>80&&stu[i].paper>=1){
     sch[i]+=8000;
     }
   if(stu[i].gpa>85&&stu[i].mate>80){
      sch[i]+=4000;
      }
   if(stu[i].gpa>90){
      sch[i]+=2000;
     }
   if(stu[i].gpa>85&&stu[i].west=='Y'){
     sch[i]+=1000;
     }
   if(stu[i].mate>80&&stu[i].official=='Y'){
     sch[i]+=850;
     }
   }
max=0;
for(i=0;i<n;i++){
   if(sch[i]>max)
      max=sch[i];
   }
for(i=0;i<n;i++){
   sum+=sch[i];
   }
for(i=0;i<n;i++){
   if(sch[i]==max)
   break;
   }
printf("%s\n%d\n%ld\n",stu[i].name,sch[i],sum);
return 0;
}
