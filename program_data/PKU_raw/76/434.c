
int main(){
    
int pdz=0,x,y,n,a[1000],b[1000],aa[1000],bb[1000];
    
scanf("%d",&n);
    
for(int i=0;i<n;i++){
        
scanf("%d %d",&a[i],&b[i]);
        
aa[i]=a[i];
       
 bb[i]=b[i];
    }
   
 for(int j=0;j<n-1;j++){
        if(a[j]<a[j+1]){
            a[j+1]=a[j];
        }
        if(b[j]>b[j+1]){
            b[j+1]=b[j];
        }
    }
    x=a[n-1];
    y=b[n-1];
    for(double o=x;o<=y;o+=0.5){
        for(int q=0;q<n;q++){
            if(o>=aa[q]&&o<=bb[q]){
                pdz+=1;
                break;
            }
            else {
                pdz=0;
            }
        }
        if(pdz==0){
            break;
        }
    }
    if(pdz==0){
        printf("no");
    }
    else {
        printf("%d %d",x,y);
    }
    return 0;
}



