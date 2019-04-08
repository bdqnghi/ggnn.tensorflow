int main ( )
{
    int n,a[100][3],i,j;
    float b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    for(j=0;j<2;j++){
    scanf("%d",&a[i][j]);}}
    b=100.0*(float)a[0][1]/(float)a[0][0];
    for(i=1;i<n;i++){
    if((100.0*(float)a[i][1]/(float)a[i][0]-b)>5){
    printf("better\n");}
    if((100.0*(float)a[i][1]/(float)a[i][0]-b)<=5&&(b-100.0*(float)a[i][1]/(float)a[i][0])<=5){
    printf("same\n");}
    if((100.0*(float)a[i][1]/(float)a[i][0]-b)<-5){
    printf("worse\n");}}
    return 0;
}


    
        