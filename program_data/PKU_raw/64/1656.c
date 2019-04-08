int main(){
    struct point{
           int x,y,z;
           }points[10];
    double d[45],e,a;
    int n,i,j,k=0;    
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d %d %d",&points[i].x,&points[i].y,&points[i].z);
            }
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){
                                        a=1.0*(points[i].x-points[j].x)*(points[i].x-points[j].x)+1.0*(points[i].y-points[j].y)*(points[i].y-points[j].y)+1.0*(points[i].z-points[j].z)*(points[i].z-points[j].z);                                     
                                        d[k]=sqrt(a);
                                        k++;
                                        }
                                        }
    for(k=0;k<n*(n-1)/2;k++){
            for(i=0;i<n*(n-1)/2-1-k;i++){
			                        if(d[i]<d[i+1]){
					                                    e=d[i+1];
				                                        d[i+1]=d[i];
		                                                d[i]=e;
			                                            }
	                                 }
                           }
    for(k=1;k<n*(n-1)/2;k++){
                     if(d[k]==d[k-1]){
                                      d[k-1]=0;
                                      }
                                      }
    for(int b=0;b<n*(n-1)/2;b++){
             for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){
                                        a=1.0*(points[i].x-points[j].x)*(points[i].x-points[j].x)+1.0*(points[i].y-points[j].y)*(points[i].y-points[j].y)+1.0*(points[i].z-points[j].z)*(points[i].z-points[j].z);
                                        e=sqrt(a);                                        
                                        if(d[b]==e){
                                                    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",points[i].x,points[i].y,points[i].z,points[j].x,points[j].y,points[j].z,d[b]);
                                                    }
                                                    
                                        }
                     }
    }                                       
    return 0;
}
