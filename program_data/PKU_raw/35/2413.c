int main(){
    int A[8][8],i,j,a,b,Line[8]={0},Row[8]={0};
    scanf("%d,%d",&a,&b);
    for(i=0;i<a;i++){
        int t=0;
        for(j=0;j<b;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j]>t){
                Line[i]=j;   //Line[i]???i???????j?
                t=A[i][j];
                
            }
        }
    }
    for(i=0;i<b;i++){
       int t=100;
      for(j=0;j<a;j++){
          if(A[j][i]<t){
              Row[i]=j;  //Row[i]???i???????j?
              t=A[j][i];
          }
      }
    }int f=0;
    for(i=0;i<a;i++){
        int t;
        t=Line[i];
        if(Row[t]==i){
            f++;
            printf("%d+%d",i,Line[i]);
        }
    }
    if(f==0){
        printf("No");
    }
    return 0;
}

