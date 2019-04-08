int main(){
int sz[5][5],m,n,a,b;
for(int k=0;k<=4;k++){
for(int t=0;t<=4;t++){
scanf("%d",&sz[k][t]);}}
scanf("%d%d",&m,&n);
if(m<=4&&m>=0&&n<=4&&n>=0){a=1;}
else{a=0;}
if(a==1){
for(int i=0;i<=4;i++){
b=sz[m][i];
sz[m][i]=sz[n][i];
sz[n][i]=b;}
for(int p=0;p<=4;p++){
    printf("%d", sz[p][0]);
for(int q=1;q<=4;q++){
printf(" %d",sz[p][q]);}
printf("\n");}
}
if(a==0){
printf("error");}
return 0;

}

