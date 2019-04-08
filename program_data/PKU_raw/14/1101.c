
int main()
{
    int n,i,score[100000],max1=0,m1=0,max2=0,m2=0,max3=0,m3=0;
    scanf("%d",&n);
    struct stu{    
           int No;
           int yw;
           int math;
           }s[100000];              
    for(i=0;i<n;i++){
                     scanf("%d%d%d",&s[i].No,&s[i].yw,&s[i].math),
                     score[i]=s[i].yw+s[i].math;
                     if(score[i]>max1){
                                       max3=max2;
                                       max2=max1;                                       
                                       max1=score[i];
                                       m3=m2;
                                       m2=m1;
                                       m1=i;
                                       continue;
                                       }
                     if(score[i]<=max1&&score[i]>max2){
                                        max3=max2;
                                        max2=score[i];
                                        m3=m2;
                                        m2=i;
                                        continue;
                                        }
                     if(score[i]<=max2&&score[i]>max3){
                                        max3=score[i];
                                        m3=i;
                                        continue;
                                        }
                     }
    printf("%d %d\n%d %d\n%d %d\n",s[m1].No,max1,s[m2].No,max2,s[m3].No,max3);   
    
    return 0;
    }