struct student
{int id;
 int chin;
 int math;
 int sum;
}stu[100000];
int main()
{
    int n,i,j,tem,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d%d%d",&stu[i].id,&stu[i].chin,&stu[i].math);
                     stu[i].sum=stu[i].chin+stu[i].math;
                     }
    int max[3]={0};
    for(i=1;i<n;i++){
                     if(stu[i].sum>stu[max[0]].sum){
                                                   tem=max[0];temp=max[1];
                                                   max[0]=i;max[1]=tem;max[2]=temp;
                     }else{
                           if(stu[i].sum>stu[max[1]].sum){
                                                   tem=max[1];
                                                   max[1]=i;max[2]=tem;
                     }else{
                           if(stu[i].sum>stu[max[2]].sum)
                                                   max[2]=i;}
                     }                              
                     }
    
    
    
  
    for(i=0;i<3;i++)
                    printf("%d %d\n",stu[max[i]].id,stu[max[i]].sum);


    return 0;
}