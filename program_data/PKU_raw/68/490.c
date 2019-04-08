int ss(int x){
              int i,j;
              j=1;
              if(x==2)return(1);
              else {if((x%2)==0)return(0);else{
                   for(i=3;i<=sqrt(x);i=i+2){
                                            if((x%i)==0){j=0;break;}
                                            }
                    if(j==1)return(1);else return(0);
                    } }                       
              }
main(){
       int n,i,j;
       scanf("%d",&n);
       for(i=6;i<=((n/2)*2);i=i+2){
                                   for(j=2;j<=((i/2)+1);j++){
                                                             if((ss(j)==1)&&(ss(i-j)==1)){printf("%d=%d+%d\n",i,j,i-j);break;}
                                                             }
                                   
                                   }
       }
