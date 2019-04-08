struct student
{ char name[20]; 
int score1; 
int score2; 
char ganbu; 
char xibu; 
int num; 
}student[100]; 
 
main () 
{ 

int a[100]; 
int n; int i,s; 
int sum=0; 
int total=0; 

scanf("%d",&n); 


for (i=1;i<=n;i++) 
{ 
scanf("%s%d%d%s%s%d",student[i].name,&student[i].score1,&student[i].score2,&student[i].ganbu,&student[i].xibu,&student[i].num); } 

for(i=1;i<=n;i++)
{ sum=0; 
if(student[i].score1>80 && student[i].num>0) 
sum=sum+8000; 
if(student[i].score1>85 && student[i].score2>80) 
sum=sum+4000; 
if(student[i].score1>90) 
sum=sum+2000; 
if(student[i].score1>85 && student[i].xibu=='Y') 
sum=sum+1000; 
if(student[i].score2>80 && student[i].ganbu=='Y') 
sum=sum+850; 
a[i]=sum; 
total=total+a[i];
} 
sum=a[1];s=1; 
for(i=2;i<=n;i++) 
{ 
if (sum<a[i]) 
{ s=i; 
sum=a[i]; 
} 
} 

printf("\n%s\n",student[s].name); 
printf("%d\n",a[s]); 
printf("%d\n",total); 
}