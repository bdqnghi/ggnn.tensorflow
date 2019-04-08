int main(){
	int n,i,j,k=0,z;
	int a[10][3];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
                      
                     if(i==0){
                     scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);
                    }
                     else{
                     scanf(" %d %d %d",&a[i][0],&a[i][1],&a[i][2]);}
                     }
    struct {
           int b[3],c[3];
           float d;
           }x[46];
    
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){
                                        
                                        x[k].b[0]=a[i][0];
                                      
                                        x[k].b[1]=a[i][1];
                                        x[k].b[2]=a[i][2];
                                        x[k].c[0]=a[j][0];
                                        x[k].c[1]=a[j][1];
                                        x[k].c[2]=a[j][2];
                                        x[k].d=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
                                        k++;
                                        }
                                        }
    
    
    for(i=0;i<k;i++){
                     for(j=k-1;j>i;j--){
                                        if(x[j].d>x[j-1].d){
                                                            x[45]=x[j];
                                                            x[j]=x[j-1];
                                                            x[j-1]=x[45];
                                                            }
                                                            }
                                                            }
    for(i=0;i<k;i++){
                     printf("\n(%d,%d,%d)-(%d,%d,%d)=%.2f",x[i].b[0],x[i].b[1],x[i].b[2],x[i].c[0],x[i].c[1],x[i].c[2],x[i].d);
                     }
                                                            
                                                            
    
    
    
return 0;}
