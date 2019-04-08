int main()
{
    int nian,yue1,yue2;
    int turn,i,j,days=0,temp;
    int szp[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int szr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&turn);
   
                   
    for(i=0;i<turn;i++){
                        scanf("%d%d%d",&nian,&yue1,&yue2);
                        if(yue1 >yue2){
                                       temp=yue1;
                                       yue1=yue2;
                                       yue2=temp;
                                       }
                        if( (nian%4 !=0) || ( (nian%400 !=0) && (nian%100 == 0) ) ){
                                     days=szp[yue1-1];
                                     for(j=yue1;j<yue2-1;j++)
                                                           days+=szp[j];
                                     if(days%7 == 0)
                                               printf("YES\n");
                                     else
                                               printf("NO\n");
                        }else{
                               days=szr[yue1-1];
                               for(j=yue1;j<yue2-1;j++)
                                                           days+=szr[j];
                                     if(days%7 == 0)
                                               printf("YES\n");
                                     else
                                               printf("NO\n");
                               }
                        }
   
        return 0;                      
 }


