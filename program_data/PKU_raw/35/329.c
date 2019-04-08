int main(){
int m,n,num,j,i,l1,l2,k,min1,min2,max1,max2,y,t;
int p[8][8];
int sum=0;
scanf("%d,%d",&m,&n);
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
    scanf("%d",&p[i][j]);}
}
y=0;k=0;
for(i=0;i<m;i++){
max1=0;
  for(j=0;j<n;j++){
   if(p[i][j]>max1)
    max1=p[i][j]; }
 for(j=0;j<n;j++){
   if(max1==p[i][j])
   {l1=i;l2=j;} }
  t=0;
  for(k=0;k<m;k++){
  if (p[l1][l2]>p[k][l2])
   t++;}
 if(t==0)
 {printf("%d+%d",l1,l2);
  y++;}
}
if(y==0)
printf("No");
return 0;
}

