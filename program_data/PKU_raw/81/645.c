
int main()
{
int sz[10][10],xsz[10];
int i,j,n,m;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
scanf("%d",&sz[i][j]);
}
}
scanf("%d %d",&n,&m);
if((n<5)&&(m<5)){
for(j=0;j<5;j++){
xsz[j]=sz[n][j];
sz[n][j]=sz[m][j];
sz[m][j]=xsz[j];
}
for(i=0;i<5;i++){
for(j=0;j<4;j++){
printf("%d ",sz[i][j]);
}
printf("%d\n",sz[i][4]);
}
}
else
printf("error\n");

return 0;
}
