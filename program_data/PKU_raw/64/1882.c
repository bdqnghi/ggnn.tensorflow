
int main(){
    int n,i,k,s,m;
    int zb[10][3];
    double d[45][7],e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                                for(s=0;s<3;s++){
                                scanf("%d",&(zb[i][s]));
                                }
                                }
                                s=0;
    for(i=0;i<=n-2;i++){
                        for(k=1;i+k<=n-1;k++){
                                              m=(zb[i][0]-zb[i+k][0])*(zb[i][0]-zb[i+k][0])+(zb[i][1]-zb[i+k][1])*(zb[i][1]-zb[i+k][1])+(zb[i][2]-zb[i+k][2])*(zb[i][2]-zb[i+k][2]);
                                              d[s][0]=sqrt(m);
                                              d[s][1]=zb[i][0];
                                              d[s][2]=zb[i][1];
                                              d[s][3]=zb[i][2];
                                              d[s][4]=zb[i+k][0];
                                              d[s][5]=zb[i+k][1];
                                              d[s][6]=zb[i+k][2];
                                              s++;
                                              }
                                              }
    m=s;
     for(k=1;m-k>0;k++){
                        for(i=0;i<m-k;i++){
                                          if(d[i][0]<d[i+1][0]){
                                                                for(s=0;s<7;s++){
                                                            e=d[i][s];
                                                            d[i][s]=d[i+1][s];
                                                            d[i+1][s]=e;
                                                            }
                                                            }
                                          }
                        }
     for(i=0;i<m;i++){
                      printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",d[i][1],d[i][2],d[i][3],d[i][4],d[i][5],d[i][6],d[i][0]);
                      }
               
                      return 0;
                      }
                   
    
    
