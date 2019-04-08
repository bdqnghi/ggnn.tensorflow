int main (){
int n,i,j,sz[1000][1000],a,b,c,d,e=1,s;
scanf ("%d",&n);
for (i=0;i<n;i++){
for (j=0;j<n;j++){
scanf ("%d",&sz[i][j]);

if (sz[i][j]==0&&e==1){
a=i;
b=j;
e=0;
}
if (sz[i][j]==0){
c=i;
d=j;
}
}
}
s=(c-a-1)*(d-b-1);
printf("%d\n",s);
return 0;
}