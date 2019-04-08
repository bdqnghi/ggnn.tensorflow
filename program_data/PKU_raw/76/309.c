int main(){
    int a[49998][2],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
       for(j=0;j<2;j++){
          scanf("%d",&a[i][j]);
       }
    }
    for (j=0;j<n;j++){
       for (i=1;i<n;i++){
          if((a[0][0]<=a[i][1]&&a[0][1]>=a[i][0])||(a[0][0]>=a[i][1]&&a[0][1]<=a[i][0])){
                    a[0][0]=(a[0][0]>a[i][0])?a[i][0]:a[0][0];
                    a[0][1]=(a[0][1]>a[i][1])?a[0][1]:a[i][1];
            }
       }
    }
    for (i=1;i<n;i++){
          if((a[0][0]>a[i][0])||(a[0][1])<a[i][1]){     
                    printf("no"); 
                    break;
          }
    }
    if (i==n){ 
          printf("%d %d",a[0][0],a[0][1]);
    }
    return 0;
}
