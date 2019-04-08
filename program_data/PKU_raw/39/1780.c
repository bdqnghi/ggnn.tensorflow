struct student{
char name[20];
int scholar;
}stu[100];

int main(){
int n,i,j,total=0,final,class1,paper,maxid,maxscholar=0;
char t1[2],t2[2];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%s%d%d%s%s%d",stu[i].name,&final,&class1,t1,t2,&paper);
    if(final>80 && paper>=1)stu[i].scholar+=8000;
    if(final>85 && class1>80)stu[i].scholar+=4000;
    if(final>90)stu[i].scholar+=2000;
    if(final>85 && t2[0]=='Y')stu[i].scholar+=1000;
    if(class1>80 && t1[0]=='Y')stu[i].scholar+=850;
    total+=stu[i].scholar;
    if(maxscholar<stu[i].scholar){maxscholar=stu[i].scholar;maxid=i;}
}
printf("%s\n%d\n%d\n",stu[maxid].name,maxscholar,total);
}
