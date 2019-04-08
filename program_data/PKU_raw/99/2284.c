int main(){
    int i,a=0,n,sz[101],b=0,c=0,d=0,zong=0;
    double aa,bb,cc,dd;
    scanf ("%d",&n);
    for(i=0;i<n;i++){
                                      scanf ("%d",&sz[i]);                                      
                    }
                     for(i=0;i<n;i++){
                                      zong++;
                                      if(sz[i]<=18){
                                                    a++;
                                                    }
                                      else if(sz[i]>18&&sz[i]<36){
                                           b++;
                                           }
                                      else if(sz[i]>35&&sz[i]<61){
                                           c++;
                                           }
                                      else if(sz[i]>60){
                                           d++;
                                           }
                                          }
                                      aa=100.00*a/zong;
                                      bb=100.00*b/zong;
                                      cc=100.00*c/zong;
                                      dd=100.00*d/zong;
                                      printf("1-18: %.2lf%%\n",aa);
                                      printf("19-35: %.2lf%%\n",bb);
                                      printf("36-60: %.2lf%%\n",cc);
                                      printf("60??: %.2lf%%",dd);
                                      return 0;
} 