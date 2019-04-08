struct point{
    int y;
    int m1;
    int m2;
};
int main(){
    int n,i,j,d,a[12]={31,29,31,30,31,30,31,31,30,31,30,31},b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    struct point A[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        d=0;
        scanf("%d%d%d",&A[i].y,&A[i].m1,&A[i].m2);
        if(A[i].m1<A[i].m2){
         if(A[i].y%400==0||(A[i].y%4==0&&A[i].y%100!=0)){
            for(j=A[i].m1;j<A[i].m2;j++){
                d=d+a[j-1];
            }
         }else{
            for(j=A[i].m1;j<A[i].m2;j++){
               d=d+b[j-1]; 
            }      
         }
        }else{
            if(A[i].y%400==0||(A[i].y%4==0&&A[i].y%100!=0)){
            for(j=A[i].m2;j<A[i].m1;j++){
                d=d+a[j-1];
            }
         }else{
            for(j=A[i].m2;j<A[i].m1;j++){
               d=d+b[j-1]; 
            }      
         }
        }
        if(d%7==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

