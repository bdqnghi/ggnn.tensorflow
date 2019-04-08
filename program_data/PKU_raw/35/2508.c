int main(){
    int a,b;
    int sz[10][10];
    scanf("%d,%d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
         scanf("%d",&sz[i][j]);  
        }
    }int max[10],m[10];
    for(int i=0;i<a;i++){
        max[i]=sz[i][0];
        m[i]=0;
        for(int j=1;j<b;j++){
            if(sz[i][j]>max[i]){
                max[i]=sz[i][j];
                m[i]=j;
               
            } 
        }
    }int sum[10];
    int s=0;
    for(int i=0;i<a;i++){
        sum[i]=0;
    }
    for(int i=0;i<a;i++){
        for(int k=0;k<a;k++){
            if(max[i]<=sz[k][m[i]]){
                sum[i]++;
            }
        }if(sum[i]==a){
            printf("%d+%d",i,m[i]);
            s++;
        }
    }if(s==0){printf("No");}
    
    return 0;
}
