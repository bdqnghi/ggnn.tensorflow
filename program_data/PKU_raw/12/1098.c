int main()
{
    int test[100][17]={0};
    
    int i,j,k,num;
    int turn=0,nonzero=0,valid=0;
  
    for(i=0;;i++){
                 for(j=0;;j++){
                               scanf("%d",&num);
                               if(num==0)
                                         break;
                               if(num == -1)
                                          goto start;
                               test[i][j]=num;
                               }
                               turn+=1;
                 }
    start: for(i=0;i<turn;i++){
                               for(j=0;;j++){
                                             if(test[i][j] != 0)
                                                           nonzero+=1;
                                             else
                                                 break;
                                             }
                               for(j=0;j<nonzero;j++){
                                                     for(k=0;k<nonzero;k++){
                                                         if((float)(test[i][j])/(float)(test[i][k]) == 2)
                                                            valid+=1;
                                                         }
                                                         }
                               printf("%d\n",valid);
                               valid=0;
                               nonzero=0;
                               }
    
       return 0;
}
