int main(){
    double a[7][7],max,c[7];
    int x=0,y=0,d=0;
    for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
                    if(i==0||i==6||j==0||j==6)
                    a[i][j]=0;
                    else
                    scanf("%lf",&a[i][j]);
                    }
            }
    for(int m=1;m<6;m++){
            c[m]=1;
            max=0;
            for(int n=1;n<6;n++){
                    if(a[m][n]>max){
                    max=a[m][n];
                    x=n;
                    y=m;
                    }
            }
            for(int t=1;t<=5;t++){
                            if(max>a[t][x])
                            c[m]=0;
                            }
            if(c[m]==1){
            d=1;
            printf("%d %d %.0lf",y,x,max);
            }
            }
    if(d==0)
    printf("not found");
    return 0;
}