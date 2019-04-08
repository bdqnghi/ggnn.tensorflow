int main(){
int sz[5][5],m,n,a,b;
for(int k=0;k<=4;k++){
for(int t=0;t<=4;t++){
scanf("%d",&sz[k][t]);}}
scanf("%d%d",&m,&n);
if(m<=4&&n<=4){
for(int i=0;i<5;i++){
b=sz[m][i];
sz[m][i]=sz[n][i];
sz[n][i]=b;}
for(int p=0;p<=4;p++){
for(int q=0;q<=3;q++){
printf("%d ",sz[p][q]);
}printf("%d\n",sz[p][4]);
}
}
else{
printf("error");
}
return 0;
}

