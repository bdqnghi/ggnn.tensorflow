int main()
{
    int n,i,j=0,k,a;
    int xy[101][2],xs[101]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&xy[i][0],&xy[i][1]);}
    for(i=0;i<n;i++){
        if(xy[i][0]>=90&&xy[i][0]<=140&&xy[i][1]>=60&&xy[i][1]<=90)
            xs[j]++;
        else j++;}
    for(i=1;i<=100;i++){
        for(k=0;k<=100-i;k++){
          if(xs[k]>xs[k+1]){
                            a=xs[k];
                            xs[k]=xs[k+1];
                            xs[k+1]=a;}}}
    printf("%d",xs[100]);
    
    return 0;
}
