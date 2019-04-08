int main(){
    int n,i,r,s,x=0,y=0,a=0,b=0;
    scanf("%d",&n);
    i=3;
    while(i<=n){
                        for(s=3;s<i;s++){
                                         if(i%s==0){
                                                    x=0;
                                                    break;
                                                    }
                                         if(i%s!=0){
                                                    x++; 
                                                    }
                                                    }
                        if(x==i-3){
                                   a=1;
                                   for(r=3;r<i+2;r++){
                                                      if((i+2)%r==0){
                                                                     y=0;
                                                                     break;
                                                                     }
                                                      if((i+2)%r!=0){
                                                                     y++;
                                                                     }
                                                      }
                                   if(y==i-1&&i+2<=n){
                                              b=1;
                                              printf("%d %d\n",i,i+2);
                                              }
                                   } 
                        x=0;
                        y=0;
                        i=i+2;
                        }
    if(a==0||b==0){
                   printf("empty");
                   }
    return 0;
}