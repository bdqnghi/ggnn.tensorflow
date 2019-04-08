int h(int n,int m);
int main(){
int s[5][5];
int i,m,n,c,y,z,a;
for(i=0;i<=4;i++){
scanf("%d %d %d %d %d",&s[i][0],&s[i][1],&s[i][2],&s[i][3],&s[i][4]);
}
scanf("%d %d",&n,&m);
c=h(n,m);
if(c==1){
for(y=0;y<=4;y++){
z=s[n][y];
s[n][y]=s[m][y];
s[m][y]=z;
}
for(a=0;a<=4;a++){
printf("%d %d %d %d %d\n",s[a][0],s[a][1],s[a][2],s[a][3],s[a][4]);
}
}else{
printf("error");
}
return 0;
}

int h(int n,int m){
int x;
if((m>=0&&m<=4)&&(n>=0&&n<=4)){
x=1;
}else{
x=0;
}
return x;
}
