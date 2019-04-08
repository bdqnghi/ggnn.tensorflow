int main()
{
    int a[1000][7];
    int i,j,s;
    for(i=0;;i++){
    for(j=0;j<6;j++){
        scanf("%d",&a[i][j]);}
        if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0){
            break;}
        s=(a[i][3]+12-a[i][0])*60*60+(a[i][4]-a[i][1])*60+(a[i][5]-a[i][2]);
        printf("%d\n",s);}
        return 0;
         }
    
        