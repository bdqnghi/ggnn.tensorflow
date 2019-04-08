int main() {
int i,j,s,a[10000][6];

for(i=0;i<10000;i++){
for(j=0;j<6;j++){
scanf("%d",&a[i][j]);}}
for(i=0;i<10000;i++){
s=(a[i][3]+12)*3600+a[i][4]*60+a[i][5]-a[i][0]*3600-a[i][1]*60-a[i][2];
if(a[i][0]!=0){printf("%d\n",s);}else{break;}
}
return 0;
}


