
int main()
{
int x1,y1,x2,y2;int a[101][101],b[101][101],c[101][101];
int i,j,p,q,circ;
scanf("%d %d",&x1,&y1);
for(i=0;i<x1;i++){
for(j=0;j<y1;j++){
scanf("%d",&(a[i][j]));
}
}
scanf("%d %d",&x2,&y2);
for(p=0;p<x2;p++){
for(q=0;q<y2;q++){
scanf("%d",&(b[p][q]));
}
}
for(i=0;i<x1;i++){
for(q=0;q<y2;q++){
for(circ=0;circ<y1;circ++){
c[i][q]+=a[i][circ]*b[circ][q];
}
printf("%d",c[i][q]);
if(q<y2-1){
printf(" ");
}
else{
printf("\n");
}
}
}
return 0;
}