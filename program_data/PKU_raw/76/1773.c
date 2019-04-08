int main(){
    int i,j,min,max,n;
    int sz[50010];
    scanf("%d",&n);
    struct cui{
 int x;
 int y;
}cui[qujian];
for(i=0;i<n;i++){
    scanf("%d%d",&(cui[i].x),&(cui[i].y));
}
min=cui[0].x;
max=cui[0].y;
for(i=0;i<n;i++){
    if(cui[i].x<min){
        min=cui[i].x;
    }
}
for(i=0;i<n;i++){
    if(cui[i].y>max){
        max=cui[i].y;
    }
}
for(i=min;i<=max;i++){
    sz[i]=1;
}
for(i=0;i<n;i++){
    for(j=(cui[i].x);j<(cui[i].y);j++){
        sz[j]=0;
    }
}
for(i=min;i<max;i++){
    if(sz[i]==1){
printf("no");
return 0;
    }}
printf("%d %d",min,max);
return 0;
}