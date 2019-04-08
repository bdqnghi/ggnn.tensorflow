

int main()
{
     int i,n,sz[1000],x,k;
    int j=0,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&x);
                     if((x%2)!=0){
                                  sz[j]=x;
                                  j++;
                                  a++;
                                  }
                                  }
       for(k=1;k<=a;k++){
                         for(j=0;j<a-k;j++){
                                          if(sz[j]>sz[j+1]){
                                                            int e;
                                                            e=sz[j+1];
                                                            sz[j+1]=sz[j];
                                                            sz[j]=e;
                                                            }
                                                            }
                                                            }
       printf("%d",sz[0]);
       for(j=1;j<a;j++){
                        printf(",%d",sz[j]);
                        }
                                  
   

   
   return 0;
   }
