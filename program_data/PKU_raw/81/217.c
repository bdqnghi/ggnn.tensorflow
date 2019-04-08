int main()
{
int a[5][5],i,n,m,e,j;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
scanf("%d",&a[i][j]);
}
}
scanf("%d %d",&n,&m);
if(n>4||n<0||m>4||m<0){
printf("error");
}
else{
for(i=0;i<5;i++){
e=a[m][i];
a[m][i]=a[n][i];
a[n][i]=e;
}
printf("%d %d %d %d %d\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4]);
printf("%d %d %d %d %d\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4]);
printf("%d %d %d %d %d\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4]);
printf("%d %d %d %d %d\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4]);
printf("%d %d %d %d %d\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
}
return 0;
}
