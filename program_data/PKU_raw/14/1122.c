
struct student{
  int num;
  int chin;
  int math;
  int sum;
}tem_stu;
int main()
{
 int n,i;
 scanf("%d",&n);
 struct student *stu;
 stu=(struct student*)malloc(n*sizeof(struct student));
 for(i=0;i<n;i++){
  scanf("%d%d%d",&stu[i].num,&stu[i].chin,&stu[i].math);
  stu[i].sum=stu[i].chin+stu[i].math;
 }
 int j;
 for(j=1;j<4;j++){
  for(i=0;i<n-j;i++){
   if(stu[i].sum>=stu[i+1].sum){
         tem_stu=stu[i+1];
         stu[i+1]=stu[i];
	stu[i]=tem_stu;
   }
  }
 }
 
 printf("%d %d\n",stu[n-1].num,stu[n-1].sum);
 printf("%d %d\n",stu[n-2].num,stu[n-2].sum);
 printf("%d %d\n",stu[n-3].num,stu[n-3].sum);
 free(stu);
 return 0;
}	

