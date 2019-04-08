int main(){
int i,j,n,a,b;
int c1,c2,c,k1,k2,k;
int sz[1000][1000];
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&(sz[i][j]));
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(sz[i][j]==0){
c1=i;
k1=j;

}
}
}

for(int a=n-1;a>=0;a--){
for(int b=n-1;b>=0;b--){
if(sz[a][b]==0){
c2=a;
k2=b;

}
}
}

c=c1-c2-1;
k=k1-k2-1;
printf("%d",c*k);
return 0;
}

