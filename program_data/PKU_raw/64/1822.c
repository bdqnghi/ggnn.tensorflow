double distance(int x1, int y1, int z1, int x2, int y2, int z2){
 double q,s;
 q=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2);
 s=sqrt(q);
 return s;
}
int main(){
int n,k,i,j,x[10],y[10],z[10];
double sz[46][7];
 scanf("%d",&n);
 for(i=0;i<n;i++){
scanf("%d%d%d",&x[i], &y[i], &z[i]);
}
 k=0;
 for(i=0;i<n-1;i++){
  for(j=i;j<n-1;j++){
   sz[k][0]=x[i]*1.0;
   sz[k][1]=y[i]*1.0;
   sz[k][2]=z[i]*1.0;
   sz[k][3]=x[j+1]*1.0;
   sz[k][4]=y[j+1]*1.0;
   sz[k][5]=z[j+1]*1.0;
   sz[k][6]=distance(x[i],y[i],z[i],x[j+1],y[j+1],z[j+1]);
   k++;
}
}
  for(i=0;i<k-1;i++){
   for(j=0;j<k-i-1;j++){
if(sz[j][6]<sz[j+1][6]){
     sz[45][0]=sz[j+1][0];
     sz[45][1]=sz[j+1][1];
     sz[45][2]=sz[j+1][2];
     sz[45][3]=sz[j+1][3];
     sz[45][4]=sz[j+1][4];
     sz[45][5]=sz[j+1][5];
     sz[45][6]=sz[j+1][6];
     sz[j+1][0]=sz[j][0];
     sz[j+1][1]=sz[j][1];
     sz[j+1][2]=sz[j][2];
     sz[j+1][3]=sz[j][3];
     sz[j+1][4]=sz[j][4];
     sz[j+1][5]=sz[j][5];
     sz[j+1][6]=sz[j][6];
     sz[j][0]=sz[45][0];
     sz[j][1]=sz[45][1];
     sz[j][2]=sz[45][2];
     sz[j][3]=sz[45][3];
     sz[j][4]=sz[45][4];
     sz[j][5]=sz[45][5];
     sz[j][6]=sz[45][6];
}
}
}
  for(i=0;i<k;i++){
   printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",sz[i][0], sz[i][1], sz[i][2], sz[i][3], sz[i][4], sz[i][5], sz[i][6]);
}
return 0;
}
