main(){
int a[9][9],c[9][9];
int i,j,k,m,n;
for(i=0;i<9;i++){
for(j=0;j<9;j++){
a[i][j]=0;
c[i][j]=0;
}
}

scanf("%d %d",&n,&m);
a[4][4]=n;




for(k=0;k<m;k++){
for(i=0;i<9;i++){
for(j=0;j<9;j++){
if(a[i][j]!=0){
c[i][j]=c[i][j]+2*a[i][j];
c[i-1][j]=c[i-1][j]+a[i][j];
c[i+1][j]=c[i+1][j]+a[i][j];
c[i+1][j+1]=c[i+1][j+1]+a[i][j];
c[i+1][j-1]=c[i+1][j-1]+a[i][j];
c[i-1][j+1]=c[i-1][j+1]+a[i][j];
c[i-1][j-1]=c[i-1][j-1]+a[i][j];
c[i][j+1]=c[i][j+1]+a[i][j];
c[i][j-1]=c[i][j-1]+a[i][j];
}
}
}
for(i=0;i<9;i++){
for(j=0;j<9;j++){
a[i][j]=c[i][j];
c[i][j]=0;
}
}



}


for(i=0;i<9;i++){
for(j=0;j<9;j++){
if(j==8)
printf("%d\n",a[i][j]);
else
printf("%d ",a[i][j]);
}
}

}