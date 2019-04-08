
int main()
{
    int N,i,price,total=0,max=0,t;
    scanf("%d",&N);
    struct student
    {
           char name[21];
           int ave;
           int comment;
           char officer;
           char province;
           int paper;
           }stu[100];
    for(i=0;i<N;i++){
                     scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].ave,&stu[i].comment,&stu[i].officer,&stu[i].province,&stu[i].paper);
                     }    
    for(i=0;i<N;i++){
                     price=0;
                     if(stu[i].ave>80&&stu[i].paper>0){price=price+8000;}
                     if(stu[i].ave>85&&stu[i].comment>80){price=price+4000;}
                     if(stu[i].ave>90){price=price+2000;}
                     if(stu[i].ave>85&&stu[i].province=='Y'){price=price+1000;}
                     if(stu[i].comment>80&&stu[i].officer=='Y'){price=price+850;}
                     total=total+price;
                     if(price>max){
                                   max=price;
                                   t=i;
                                   }
                     }
    printf("%s\n%d\n%d\n",stu[t].name,max,total);
    
    return 0;
    }
